#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("date.txt");
int main()
{
    int d, nr=0, x;
    fin>>x;
    while(fin>>d)
    {
        if(d>x)
        {
            nr++;
          //  cout<<d <<endl;
        }
        x=d;
    }
    cout<<nr;
    return 0;
}
