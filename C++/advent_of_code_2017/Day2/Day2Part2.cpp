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
        for(int i = 1 ; i < 16; i++)
        {
            for(int j = i + 1; j <= 16; j++)
            {
                if(a[x][i] < a[x][j]){
                    int aux = a[x][i];
                    a[x][i] = a[x][j];
                    a[x][j] = aux;
                }
            }
        }
    }

    for(int x = 1; x <= 16; x++)
    {
        int ok = 0;
        for(int i = 1 ; i < 16 && ok == 0; i++)
        {
            for(int j = i + 1; j <= 16; j++)
            {
                if(a[x][i] % a[x][j] == 0)
                {
                    s += a[x][i] / a[x][j];
                    ok = 1;
                }

            }
        }
    }

    cout<<s; //303

    return 0;
}