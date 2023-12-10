#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("bac.txt");
int a1[1000][1000];
void numar (char *n, int &m)
{
    m=0;
    for(int i=0; i<strlen(n); i++)
    {
        m=m*10+(n[i]-'0');
    }
}
void turnon (int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<=x2; i++)
        for(int j=y1; j<=y2; j++)
            a1[i][j]++;
}
void turnoff (int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<=x2; i++)
        for(int j=y1; j<=y2; j++)
            {
                if(a1[i][j]>0)
                    a1[i][j]--;
            }
}
void toggle (int x1, int y1, int x2, int y2)
{
    for(int i=x1; i<=x2; i++)
        for(int j=y1; j<=y2; j++)
        {
            a1[i][j]+=2;
        }
}
int main()
{
    char s[50], *ins, *a, *b, *c, *d;
    int x1, y1, x2, y2, nr=0;
    while(fin.getline(s,50))
    {
        ins=strtok(s, " ");
        if(strcmp(ins,"turn")==0)
            ins=strtok(NULL, " ");
        a=strtok(NULL, ",");
        numar(a,x1);
        b=strtok(NULL, " ");
        numar(b,y1);
        c=strtok(NULL, " ");
        c=strtok(NULL, ",");
        numar(c,x2);
        d=strtok(NULL, " ");
        numar(d,y2);
        if(strcmp(ins, "toggle")==0)
            toggle(x1,y1,x2,y2);
        else if (strcmp(ins, "on")==0)
            turnon(x1,y1,x2,y2);
        else turnoff(x1,y1,x2,y2);
    }
    for(int i=0; i<=999; i++)
    {
        for(int j=0; j<=999; j++)
        {
            nr=nr+a1[i][j];
        }
    }
    cout<< nr;
}
