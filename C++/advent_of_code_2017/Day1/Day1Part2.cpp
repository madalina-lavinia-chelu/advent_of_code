#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int main()
{
    char s[2005];
    int i,sum=0;
    fin>>s;
    for(i=0;i<strlen(s)/2;i++)
    {
        if(s[i]==s[strlen(s)/2+i])
        {
            sum=sum+2*(s[i]-'0');
        }
    }
    cout<<sum;
    return 0;
}

