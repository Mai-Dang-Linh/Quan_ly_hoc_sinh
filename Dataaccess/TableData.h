#ifndef TableData_H_
#define TableData_H_
#include <vector>
#include "../ManagerST/TableUnit.h"
using namespace std;

class TableData{
private :
    vector<TableUnit*> data;
    int size;
    TableUnit* tableUnit;
public:
    TableData(TableUnit *);
    // TableData(String FileName);
    string ToString();
    int Push(TableUnit *);
    int Delete(int index);

};
#endif