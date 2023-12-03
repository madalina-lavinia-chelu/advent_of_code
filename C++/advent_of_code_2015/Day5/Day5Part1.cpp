#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("bac.txt");
int vocale (char s[])
{
    int k=0;
    for(int i=0; i<strlen(s); i++)
    {
        if (strchr("aeiou",s[i])!=NULL)
        {
            k++;
        }
        if(k==3)
            return 1;
    }
    return 0;
}
int dublu (char s[])
{
    for(int i=1; i<strlen(s); i++)
    {
        if(s[i-1]==s[i])
            return 1;
    }
    return 0;
}
int interzis (char s[])
{
    if(strstr(s,"ab"))
        return 0;
    if(strstr(s,"cd"))
        return 0;
    if(strstr(s,"pq"))
        return 0;
    if(strstr(s, "xy"))
        return 0;
    return 1;
}
int main()
{
    char s[100];
    int n=0;
    while(fin>>s)
    {
        if(vocale(s)&&dublu(s)&&interzis(s))
            n++;
    }
    cout<< n;
    return 0;
}

