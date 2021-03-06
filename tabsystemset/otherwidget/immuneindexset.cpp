#include "immuneindexset.h"
#include "ui_immuneindexset.h"
#include "globaldef.h"


/****************     构造函数      **********************/
ImmuneIndexSet::ImmuneIndexSet(QWidget *parent) :
    QWidget(parent)
  ,ui(new Ui::immuneindexset)
  ,nowRow(-1)
  ,typeSetDialog(NULL)
  ,templateSetUp(NULL)
{
    ui->setupUi(this);

    this->initControl();  //初始化控件
    this->initValue();    //初始化值
}

/****************     析构函数      **********************/
ImmuneIndexSet::~ImmuneIndexSet()
{
    delete ui;
}

/****************     显示对话框    **********************/
void ImmuneIndexSet::showDialog()
{
    this->initValue();

    nowRow = 0;

    if(SYSTEMDATA->getStainingName().size() != 0)
    {
        ui->tableWidget->selectRow(0);
        ui->tableWidget->setFocus();
    }

    SYSTEMDATA->selectStainingData(GLOBALDEF::FIRSTTYPE);

    this->show();
}

/****************     初始化控件    **********************/
void ImmuneIndexSet::initControl()
{
    //设置单行选中
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setAlternatingRowColors(true);

    //等宽显示
    QHeaderView *headerView = ui->tableWidget->horizontalHeader();
    headerView->setSectionResizeMode(QHeaderView::Stretch);

    //纵向隐藏序号
    headerView=ui->tableWidget->verticalHeader();
    headerView->setHidden(true);

    //去除点击的虚线
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);

    //设置为不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //设置表头点击禁止塌陷
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    //创建打印模板对象
    templateSetUp = new TemplateSetUp(SIXTHWIDGET, this);
    typeSetDialog = new TypeSetDialog(this);

    typeSetDialog->setInfo();

    //连接信号和槽
    connect(typeSetDialog, SIGNAL(sendString(QString, int)), this,SLOT(receiveData(QString, int)));
}

/****************     初始化值      **********************/
void ImmuneIndexSet::initValue()
{
    int count = SYSTEMDATA->selectStainingData(GLOBALDEF::FIRSTTYPE);  //查询标本类别信息

    if(count == GLOBALDEF::DATAERROR) return;

    ui->tableWidget->setRowCount(count);

    QMap<QString , QString> mapData =  SYSTEMDATA->getStainingName();

    for(int i = 0; i < mapData.keys().size(); i ++)
    {
        ui->tableWidget->setItem(i, 0, DATA(mapData[mapData.keys().at(i)]));          //名称
    }
}

/****************     接收数据      **********************/
void ImmuneIndexSet::receiveData(QString typeName, int type)
{
    if(type ==  GLOBALDEF::TYPEINSERT)
    {
        SYSTEMDATA->insertStainingData(typeName, GLOBALDEF::FIRSTTYPE);
    }
    else if(type ==  GLOBALDEF::TYPEUPDATE)
    {
        if(nowRow >= SYSTEMDATA->getStainingName().size()) return;

        SYSTEMDATA->updateStainingData(typeName, SYSTEMDATA->getStainingName().keys().at(nowRow));
    }

    this->initValue();
}

/****************     新建         **********************/
void ImmuneIndexSet::on_pushButtonNew_clicked()
{
    typeSetDialog->showNewDialog();
}

/****************     删除         **********************/
void ImmuneIndexSet::on_pushButtonDelete_clicked()
{
    if(nowRow < 0) return;

    if(nowRow >= SYSTEMDATA->getStainingName().size()) return;

    bool success = SYSTEMDATA->deleteStainingData(SYSTEMDATA->getStainingName().keys().at(nowRow));

    if(!success) return;

    ui->tableWidget->removeRow(nowRow); //移除删除的一行

    SYSTEMDATA->selectStainingData(GLOBALDEF::FIRSTTYPE);
}

/****************     更新         **********************/
void ImmuneIndexSet::on_pushButtonUpdate_clicked()
{
    if(NULL == ui->tableWidget->currentItem()) return;

    QMap<QString , QString> mapData =  SYSTEMDATA->getStainingName();

    QString codeTypeName = mapData[mapData.keys().at(nowRow)];

    typeSetDialog->showUpdateDialog(NULL, codeTypeName);
}

/****************     退出         **********************/
void ImmuneIndexSet::on_pushButtonExit_clicked()
{
    this->close();
}

/****************     点击列表控件  **********************/
void ImmuneIndexSet::on_tableWidget_clicked(const QModelIndex &index)
{
    nowRow = index.row();
}

/****************     打印标签  **********************/
void ImmuneIndexSet::on_pushButtonPrint_clicked()
{
    if(NULL == ui->tableWidget->currentItem()) return;

    QMap<QString , QString> mapData =  SYSTEMDATA->getStainingName();

    templateSetUp->printImage(mapData.value(mapData.keys().at(nowRow)));
}

/****************     全部打印  **********************/
void ImmuneIndexSet::on_pushButtonPrintAll_clicked()
{
    QMap<QString , QString> mapData =  SYSTEMDATA->getStainingName();

    for(int i = 0; i < mapData.keys().size(); i ++)
    {
        templateSetUp->printImage(mapData.value(mapData.keys().at(i)));
    }
}

/****************     设置模板  **********************/
void ImmuneIndexSet::on_pushButtonTemplateSet_clicked()
{
    QMap<QString , QString> mapData =  SYSTEMDATA->getStainingName();

    if(NULL != ui->tableWidget->currentItem())
    {
        templateSetUp->setQrCodeNumber(mapData.value(mapData.keys().at(nowRow)));
    }

    templateSetUp->showWidget();
}
