#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("bac.txt");
int main()
{
    //part2
    char t[20], *p;
    long long s=0;
    int v[3];
    for(int i=1; i<=1000; i++)
    {
        int l=0, w=0, h=0;
        fin>>t;
        p=strtok(t,"x");
        while(p!=NULL)
        {
            int k=0;
            for(int j=0; j<strlen(p); j++)
            {
                k=k*10+(p[j]-'0');
            }
            if(l==0) l=k;
            else if (w==0) w=k;
            else h=k;
            p=strtok(NULL, "x");
        }
       v[0]=l+l+w+w;
       v[1]=l+l+h+h;
       v[2]=w+w+h+h;
       int mn=v[0];
       for(int j=0; j<=2; j++)
       {
           if(v[j]<mn) mn=v[j];
       }
       s+=mn;
       s+=(l*h*w);
    }
    cout<< s ;
    return 0;
}
