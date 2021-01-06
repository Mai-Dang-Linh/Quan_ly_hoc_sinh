#include "StudentData.h"
#include <fstream>
#include "../Libs/Functionplus.h"

#include<string>
using namespace std;
StudentData::StudentData()
{
    _maxId = 0;
    _data.resize(0);
}
StudentData::StudentData(string fileName)
{
    _maxId = 0;
    _data.resize(0);
    ifstream fileIn(fileName);
    int number;
    fileIn >> number;
    int Id;
    string _maSV;
    string _hoTen;
    string _ngaySinh;
    string _sex;
    for( auto i:number)
    {
        fileIn >>_maSV;
        fileIn >>_hoTen;
        fileIn >> _ngaySinh;
        fileIn >>_sex;
        Student student(_maxSV,Functionplus::ReplaceAll(_hoTen,"_"," "),_ngaySinh,_sex);
        _data.push_back(student);
        _maxId = Id;
    }
    fileIn.close();
}
int StudentData::GetMaxId()
{
    return _maxId;
}

// StudentData::StudentData(string fileName)
// {}
string StudentData::To_String()
{
    string s("");
    for(Student student:_data)
    {
        s += student.To_String();
        s += "\n";   
    }
    return s;
}

vector<Student> StudentData::GetData()
{
    return _data;
}
int StudentData::Push(Student student)
{
    if(_maxId < student.GetId())
    {
        _maxId = student.GetId();
    }
    _data.push_back(student);
    return _maxId;
}
int StudentData::ExportToFile(string fileName)
{
    // sai goi ten ostream
    ofstream fileOut(fileName);

    fileOut <<_data.size() <<endl;
    if(!fileOut) return 0;
    for(Student student:_data)
    {
        fileout <<student.GetId;
        fileOut << Functionplus::ReplaceAll(student.GetMaSv()," ","_") << endl;
        fileOut << Functionplus::ReplaceAll(student.GetHoTen()," ","_") << endl;
        fileOut << Functionplus::ReplaceAll(student.GetNgaySinh()," ","_") << endl;
        fileOut << Functionplus::ReplaceAll(student.GetSex()," ","_") << endl;
    }
    fileOut.close();
    return 1;
}
StudentData::Student* GetPointer(int i)
{
    Student *student = nullptr;
    if(i>=0 && i<_data.size())
        student = &_data[i];
    return  student;
}