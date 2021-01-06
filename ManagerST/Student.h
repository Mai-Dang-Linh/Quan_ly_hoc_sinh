#ifndef Student_H_
#define Student_H_
#include <iostream>
#include <string>

using namespace std;

class Student{
    int Id;
    string _maSV;
    string _hoTen;
    string _ngaySinh;
    string _sex;
public:
    Student();
    Student(string masv,string hoten, string ngaysinh,string sex);
    string To_String();
    string GetMaSv();
    string GetHoTen();
    string GetNgaySinh();
    string GetSex();
    int GetId();

};
#endif