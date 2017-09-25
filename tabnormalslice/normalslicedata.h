﻿#ifndef NORMALSLICEDATA_H
#define NORMALSLICEDATA_H
#include <QString>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QFile>
#include <QIODevice>
#include <QDebug>
#include "singleton/singleton.h"

typedef struct DataNormalSlice
{
    QString sectionId;      //id
    QString sectionCode;    //编号
    QString embedCode;      //编号
    QString stainTypeName;  //染色类型
    QString staining;       //染色指标
    QString sectionTime;    //切片时间
    QString sectioner;      //切片人
    QString stainTime;      //染色时间
    QString stainer;        //染色人
    QString printNum;       //打印数量
    QString printed;        //是否打印
    QString other;          //其他
}DataNormalSlice;


#define NORMALSLICEDATA NormalSliceData::getInstance()

class NormalSliceData
{
public:
    static NormalSliceData * getInstance()
    {
        if(NULL == instance)
        {
             instance = new NormalSliceData();
        }

        return instance;
    }

    /************构造函数*************/
    NormalSliceData();

    /************连接数据库*************/
    bool dataCnn();

    /************插入数据*************/
    bool insertData(DataNormalSlice data);

    /************查询数据*************/
    int selectData(int type, QString text);

    /************更改数据*************/
    bool updateData(DataNormalSlice data);

    /************删除数据*************/
    bool deleteData(int type, QString id);

    QList<DataNormalSlice> getDataList() const;

private:
    QSqlDatabase db;                   //定义数据库对象
    static NormalSliceData * instance; //单例模式
    QList<DataNormalSlice> dataList;   //数据库数据
};

#endif // DATABASE_H
