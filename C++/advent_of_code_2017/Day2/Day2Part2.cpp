#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ifstream fin("date.in");


int main()
{
    int s = 0, min, max, x;
    int a[17][17];

    for(int i = 1; i <= 16; i++){
        for(int j = 1; j <= 16; j++){
           fin>>a[i][j]
        }
    }
    for(int x = 1; x <= 16; x++)  // pentru fiecare linie realizam sortare
    {
    }
    cout<<s;

    return 0;
}