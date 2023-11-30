#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fisier.txt");

int main()
{
    //the variant should contain a larger data structure
    int x = 0, y = 0, s = 1, a[1000][1000] = {0};
    char c;

    x = 1000/2;
    y = 1000/2;
    while( fin >> c){
        if( c == '<')
            x = x - 1;
        if( c == '>')
            x = x + 1;
        if( c == '^')
            y = y + 1;
        if( c == 'v')
            y = y - 1;

        a[x][y]++;

    }

    for (int i = 0; i < 1000/2; i++) {
        for (int j = 0; j < 1000/2; j++) {
            if (a[i][j] > 0) {
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}