    #include <iostream>
    #include "../ManagerST/Student.h"
    #include "../Dataaccess/StudentData.h"

    using namespace std;

int main()
{
    StudentData st;
    Student student1("SV001","Do Thi Ha","1999-12-22","Nu");
    Student student2("SV002","Le Binh Minh","2000-08-19","Nam");
    Student student3("SV003","Nguyen Minh Canh","1997-04-09","Nam");
    Student student4("SV004","Le huu Long","2000-01-02","Nam");
    st.Push(student1);
    st.Push(student2);
    st.Push(student3);
    st.Push(student4);

    cout <<st.To_String();
}