#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("fis.in");
int trei(char s[])
{
    int i;
    for(i=0;i<strlen(s)-2;i++)
    {
        if(s[i]==s[i+2])
        {
            return 1;
        }
    }
    return 0;
}
int sir(char s[])
{
    int i;
    char t[3];
    for(i=0;i<strlen(s)-1;i++)
    {
        strncpy(t,s+i,2);
        if(strstr(s+i+2,t)!=NULL)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char s[21];
    int nice=0;
    while(fin>>s)
    {
        if(sir(s)==1 && trei(s)==1)
        {
            nice++;
        }
    }
    cout<<nice;
    return 0;
}

