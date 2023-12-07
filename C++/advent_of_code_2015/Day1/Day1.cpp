#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.txt");
int main()
{
    char p;
    int k=0, n=1, ok=1, poz;
    while(fin>>p)
    {
        if(p==')')
            k--;
        else
            k++;
        if(k<0 && ok==1)
        {
            poz=n;
            ok=0;
        }
        n++;
    }
    cout<< k<< " "<< n<< " " << poz;
    return 0;
}
