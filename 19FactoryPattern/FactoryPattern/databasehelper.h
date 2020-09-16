#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H
#include "studenthelperaccess.h"
#include "studenthelperoracel.h"
#include "gradeshelperaccess.h"
#include "gradeshelperoracel.h"
#include <functional>
#include <map>
using namespace std;

class DataBaseHelper
{
public:
    enum DBType{Access,Oracel};
    enum DataType{StudentTable,GradesTable};
    typedef function<void*()> Func;
public:
    DataBaseHelper()
    {
        //��Ʒע��
        TableRegistry.insert(make_pair(make_pair(Access,StudentTable),StudentHelperAccess::getStudentHelperAccess));
        TableRegistry.insert(make_pair(make_pair(Access,GradesTable),GradesHelperAccess::getGradesHelperAccess));
        TableRegistry.insert(make_pair(make_pair(Oracel,StudentTable),StudentHelperOracel::getStudentHelperOracel));
        TableRegistry.insert(make_pair(make_pair(Oracel,GradesTable),GradesHelperOracel::getGradesHelperOracel));

    }
    StudentHelper *createStudentHelper()
    {
        return static_cast<StudentHelper *>( TableRegistry[make_pair(currentDbtype,StudentTable)]());
    }
    GradesHelper *createGradesHelper()
    {
        return static_cast< GradesHelper *>( TableRegistry[make_pair(currentDbtype,GradesTable)]());
    }
private:
    map<pair<DBType,DataType>,Func> TableRegistry;
    //��ǰ�����ݿ����ͣ�����Ҫ�л����ݿ⣬����Ҫ�޸���һ��
    DBType currentDbtype = Access;
};

#endif // DATABASEHELPER_H
