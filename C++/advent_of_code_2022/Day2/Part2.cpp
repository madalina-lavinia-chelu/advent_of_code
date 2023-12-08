#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("bac.txt");
int main()
{
    char m, n;
    int s=0;
    while(fin>>m>>n)
    {
        if(n=='Y') s+=3;
        if(n=='Z') s+=6;

        if(n=='X')
        {
            if(m=='A') s+=3;
            if(m=='B') s++;
            if(m=='C') s+=2;
        }
         if(n=='Z')
        {
            if(m=='A') s+=2;
            if(m=='B') s+=3;
            if(m=='C') s++;
        }
        if(n=='Y')
        {
            if(m=='A') s++;
            if(m=='B') s+=2;
            if(m=='C') s+=3;
        }
    }
    cout<< s ;
}
