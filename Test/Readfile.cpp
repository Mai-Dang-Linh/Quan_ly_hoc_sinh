#include<iostream>
#include "../ManagerST/Student.h"
#include "../Dataaccess/StudentData.h"
#include "../Libs/Functionplus.h"
 using namespace std;

int main()
{

    StudentData studentdata("Studen.data");
    Student* sto = studentdata.GetPointer(1);
    cout << sto->GetId() << endl;
    cout << sto->GetMaSv() << endl;
    cout << sto->GetNgaySinh() << endl;
 
}