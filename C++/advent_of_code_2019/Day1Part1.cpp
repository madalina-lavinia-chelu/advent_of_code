#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.txt");
int main()
{
    int x;
    long long s = 0;
    while(fin>>x)
    {
        s += (x / 3 - 2);
    }
    cout<<s;
    return 0;
}

