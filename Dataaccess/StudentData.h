#ifndef StudentData_H_
#define StudentData_H_
#include "../ManagerST/Student.h"
#include "../Libs/Functionplus.h"
#include <string>
#include <vector>
using namespace std;
class StudentData{
private:
    vector<Student> _data;
    int _maxId;
public:
    StudentData();
    StudentData(string fileName);
    string To_String();
    vector<Student> GetData();
    int GetMaxId();
    void Add(Student student);
    int ExportToFile(string fileName);
    Student* GetPointer(string i);
    // void Save(string fileName);
    int DeleteData(string k);
    int Eddit(Student student);


};
#endif