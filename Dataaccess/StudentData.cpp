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
    long _id;
    string _maSV;
    string _hoTen;
    string _ngaySinh;
    string _sex;
    for(int i =1;i <=number ; i++)
    {   
        fileIn >> _id;
        fileIn >> _maSV;
        fileIn >> _hoTen;
        fileIn >> _ngaySinh;
        fileIn >> _sex;
        // cout<< _id <<" "<< _maSV<<endl;
        Student student(_maSV,Functionplus::ReplaceAll(_hoTen,'*',' '),_ngaySinh,_sex);
        student.SetId(_id);
        _data.push_back(student);
        _maxId = _id;
    }
    fileIn.close();
}
int StudentData::GetMaxId()
{
    return _maxId;
}
// int StudentData::GetmaSV()
// {
//     return _maSV;
// }
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
void StudentData::Add(Student student)
{
    student.SetId(++_maxId);
    _data.push_back(student);
}
int StudentData::ExportToFile(string fileName)
{
    // sai goi ten ostream
    ofstream fileOut(fileName);

    if(!fileOut) return 0;
    fileOut<<_data.size();
    for(Student student:_data)
    {
        fileOut << student.GetId() << endl;
        fileOut << student.GetMaSv() << endl;
        cout << Functionplus::ReplaceAll(student.GetHoTen(),' ','*') << endl;
        fileOut << Functionplus::ReplaceAll(student.GetHoTen(),' ','*') << endl;
        fileOut << student.GetNgaySinh() << endl;
        fileOut << student.GetSex() << endl;
    }
    fileOut.close();
    return 1;
}
Student* StudentData::GetPointer(string j)
{
    // cout <<_data.size();
    // Student* student = nullptr;
    // if(i>=0 && i<_data.size())
    //     student = &_data[i];
    // return  student;
    Student* student = nullptr;
    for(int i = 0; i<_data.size(); i++){
        if(Functionplus::StringToUpper(_data[i].GetMaSv())==Functionplus::StringToUpper(j)){
            student = &_data[i];
            break;
        }
    }
    return student;
}
int StudentData::DeleteData(string k)
{
    int f =-1;
    for(int i=0;i<_data.size();i++)
    {
        if(Functionplus::StringToUpper(_data[i].GetMaSv())== Functionplus::StringToUpper(k)){
            _data.erase(_data.begin()+i);
            cout<< "ok element deleted"<<endl;
            f = i; 
            break; 
        }
    }
    return f;
}
int StudentData::Eddit(Student student)
{
   string me = student.GetMaSv();
   int f = -1;
   for(int i = 0;i<_data.size();i++)
   {
       if(me == _data[i].GetMaSv()){

        student.SetId(_data[i].GetId());
        _data[i] = student;
       }

   }
   return f;
}

