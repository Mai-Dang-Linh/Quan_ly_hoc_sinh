#include "Functionplus.h"
string Functionplus::ReplaceAll(string s,const string &reach, const string& replace)
{
    for(size_t pos;; pos+=replace.length())
    {
        pos = s.find(replace,pos);
        if(pos== string::npos)
            break;
        s.erase(pos,reach.length());
        s.insert(pos,replace);    
    }
    return s;
}