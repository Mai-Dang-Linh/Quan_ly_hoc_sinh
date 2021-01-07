#include "Student.h"

Student::Student(){}
Student::Student(string masv,string hoten, string ngaysinh,string sex)
{

     _maSV = masv;
     _hoTen = hoten;
     _ngaySinh = ngaysinh;
     _sex = sex;
}
string Student:: To_String()
{
    string s("");
    s += "{";
    s += "Id :" + to_string(_id) + ", ";
    s += "MaSv:" +_maSV + ", ";
    s += "HoTen:" + _hoTen + ", ";
    s += "Ngaysinh:" + _ngaySinh +", ";
    s += _sex;
    s += "}";
    return s;
}
int Student::GetId(){
    return _id;
}
void Student::SetId(int id)
{
    _id = id; 
}
string Student:: GetMaSv(){
    return _maSV;
}
string Student:: GetHoTen(){
    return _hoTen;
}
string Student:: GetNgaySinh(){
    return _ngaySinh;
}
string Student:: GetSex(){
    return _sex;
}

