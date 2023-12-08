#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

ifstream fin("date.in");
int main()
{
    int s = 0, min, max, x;

    for(int i = 1; i <= 16; i++){
        min = 100000;
        max = 0;
        for(int j = 1; j <= 16; j++){
            fin>>x;
            if(x > max)
                max = x;
             if(x < min)
                min = x;
        }
        s += abs(max - min);
    }
    cout<<s;

    return 0;
}