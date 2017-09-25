#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tabregister/tabregister.h"
#include "tabsystemset/tabsystemset.h"
#include "tabmaterial/tabmaterial.h"
#include "tabnormalslice/tabnormalslice.h"
#include "tabimmuneslice/tabimmuneslice.h"
#include "tabspecialslice/tabspecialslice.h"
#include "tabstatistics/tabstatistics.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void sendNumber(QString, QString);

private slots:
    void receiveNumber(QString number, QString id);

private:
    Ui::MainWindow *ui;

    void initControl();              //初始化控件
    void initConnect();              //初始化信号与槽

private:
    TabRegister *tabRegister;        //登记
    TabSystemSet *tabSystemSet;      //系统设置
    TabMaterial *tabMaterial;        //取材
    TabNormalSlice *tabNormalSlice;  //常规切片
    TabImmuneSlice *tabImmuneSlice;  //免疫组化切片
    TabSpeciaSlice *tabSpecialSlice; //特染切片
    TabsSatistics *tabsSatistics;    //取材统计
};

#endif // MAINWINDOW_H
