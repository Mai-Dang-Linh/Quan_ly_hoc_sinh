#include "TableData.h"
#include <iostream>
TableData::TableData(TableUnit* ptU)
{
    tableUnit = ptU;
}
// TableData::TableData(string FileName)
// {
//     return 0;
// }
string TableData::ToString()
{
    string s("");
    for(TableUnit* unit:data)
    {
        s += unit->ToString();
        s += "\n";
    }
    return s;
}
int TableData::Push(TableUnit * unit)
{
    // TableUnit * unit;
    data.push_back(unit);
    size++;
    return size;
}
int TableData::Delete(int index)
{
    if(index<data.size())
        data.erase(data.begin()+index);
    else index = -1;
    return index;
}
