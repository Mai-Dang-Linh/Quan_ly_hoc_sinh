#include "Functionplus.h"
#include <algorithm>
using namespace std;

string Functionplus::ReplaceAll(string s,const char& reach, const char& replace)
{
    // for(size_t pos = 0;; pos+=replace.length())
    // {
    //     pos = s.find(replace,pos);
    //     if(pos== string::npos)
    //         break;
    //     s.erase(pos,reach.length());
    //     s.insert(pos,replace);    
    // }'
    for_each(s.begin(),s.end(),[&reach,&replace](char& i){
        if(i==reach){
            i=replace;
        }
    });
    return s;
}
string Functionplus::StringToUpper(string s){
    transform(s.begin(),s.end(),s.begin(),::toupper);
    return s;
}