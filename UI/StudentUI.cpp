#include "StudentUI.h"
#include "../Dataaccess/StudentData.h"
#include "../ManagerST/Student.h"

using namespace std;
void StudentUI::Addstudent()
{
    vector<Student> student;
    string _maSV;
    string _hoTen;
    string _ngaySinh;
    string _sex;
    while(true)
    {
    cout<<"____________Enter student___________ " <<endl;
    cout <<"Enter code student: " <<endl;
    cin >>_maSV;
    cin.ignore();
    cout <<"Enter name: "<<endl;
    getline(cin,_hoTen);
    cout <<"Enter ngay sinh: "<<endl;
    getline(cin,_ngaySinh);
    cout << "Sex :" <<endl;
    cin >>_sex;
    student.push_back(Student(_maSV,_hoTen,_ngaySinh,_sex));

    int key;
    cout <<" Press 1 to stop :";
    cin >> key;
    if(key== 1)
        break;
    }
    int key2;
    cout << "Ban co muon luu vao data:";
    cout << "Nhan 2 de luu: ";
    cin >>key2;
    if(key2 == 2)
    {
        StudentData _data("Student.data");
        for(Student i:student){
            _data.Add(i);
        }
        student.clear();
        _data.ExportToFile("Student.data");
    }

}
void StudentUI::Edditstudent()
{
    cout <<"-----------------Edit data student------------------"<<endl;
    string ma;
    cout << " Enter code student: ";
    cin>> ma;
    StudentData studentdata("Studen.data");
    Student * st = studentdata.GetPointer(ma);
    cout << "Eddit information :";
    cout << st->To_String() << endl;
    string hovaten;
    cin.ignore();
    cout <<"Name: ";
    getline(cin,hovaten);
    string ngaysinh;
    cout <<" Ngay sinh:";
    cin >> ngaysinh;
    cin.ignore();
    string msv;
    cout <<"Code Nhanvien:";
    cin >> msv;
    string sex;
    cout <<" enter sex :";
    cin >> sex;
    Student _data(msv,hovaten,ngaysinh,sex);
    studentdata.Eddit(_data);
    cout << _data.To_String();
    studentdata.ExportToFile("Studen.data");
}

