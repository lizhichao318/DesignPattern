#include <QCoreApplication>
#include "student.h"
#include "grades.h"
#include "databasehelper.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //创建工厂类，切换数据库无需修改客户端
        DataBaseHelper *dbhelper = new DataBaseHelper ();

        cout << "*****对 Student 的操作*****"<<endl;
        Student student1;
        StudentHelper * studenthelper = dbhelper->createStudentHelper();
        studenthelper->saveStudent(student1);
        studenthelper->getStudent(0);

        cout << "*****对 Grades 的操作*****"<<endl;
        Grades grades1;
        GradesHelper * gradeshelper = dbhelper->createGradesHelper();
        gradeshelper->saveGrades(grades1);
        gradeshelper->getGrades(0);

        delete gradeshelper;
        delete studenthelper;
        delete dbhelper;

    return a.exec();
}
