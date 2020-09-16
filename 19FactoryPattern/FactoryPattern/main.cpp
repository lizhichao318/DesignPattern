#include <QCoreApplication>
#include "student.h"
#include "grades.h"
#include "databasehelper.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //���������࣬�л����ݿ������޸Ŀͻ���
        DataBaseHelper *dbhelper = new DataBaseHelper ();

        cout << "*****�� Student �Ĳ���*****"<<endl;
        Student student1;
        StudentHelper * studenthelper = dbhelper->createStudentHelper();
        studenthelper->saveStudent(student1);
        studenthelper->getStudent(0);

        cout << "*****�� Grades �Ĳ���*****"<<endl;
        Grades grades1;
        GradesHelper * gradeshelper = dbhelper->createGradesHelper();
        gradeshelper->saveGrades(grades1);
        gradeshelper->getGrades(0);

        delete gradeshelper;
        delete studenthelper;
        delete dbhelper;

    return a.exec();
}
