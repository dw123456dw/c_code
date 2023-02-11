#include "dataconfig.h"

dataConfig::dataConfig(QObject *parent) : QObject(parent)
{
    int arry1[4][4]={{1,1,1,1},
                     {1,1,0,1},
                     {1,0,0,0},
                     {1,1,0,1}};

    QVector<QVector<int>> v;
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry1[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(1,v);

    int arry2[4][4]={{1,0,1,1},
                     {0,0,1,1},
                     {1,1,0,0},
                     {1,1,0,1}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry2[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(2,v);


    int arry3[4][4]={{0,0,0,0},
                     {0,1,1,0},
                     {0,1,1,0},
                     {0,0,0,0}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry3[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(3,v);


    int arry4[4][4]={{0,1,1,1},
                     {1,0,0,1},
                     {1,0,1,1},
                     {1,1,1,1}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry4[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(4,v);

    int arry5[4][4]={{0,1,1,1},
                     {1,0,0,1},
                     {1,0,1,1},
                     {1,1,1,1}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry5[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(5,v);

    int arry6[4][4]={{0,1,1,1},
                     {1,0,0,1},
                     {1,0,1,1},
                     {1,1,1,1}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry6[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(6,v);

    int arry7[4][4]={{0,1,1,1},
                     {1,0,0,1},
                     {1,0,1,1},
                     {1,1,1,1}};

    v.clear();
    for(int i=0;i<4;i++)
    {
        QVector<int> v1;
        for(int j=0;j<4;j++)
        {
            v1.push_back(arry7[i][j]);
        }
        v.push_back(v1);
    }
    m_data.insert(7,v);
}
