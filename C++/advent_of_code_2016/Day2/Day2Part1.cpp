#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream fin("in");
int main()
{
    int a = 2, b = 2;
    char s[1000];
    for(int i = 1; i <= 4; i++){
        fin.getline(s,1000);
        for(int j = 0; j < strlen(s); j++){
            if(s[j] == 'U' && a - 1 > 0) a--;
            if(s[j] == 'R' && b + 1 < 4) b++;
            if(s[j] == 'D' && a + 1 < 4) a++;
            else if(s[j] == 'L' && b - 1 > 0) b--;
        }
        //cout<<a<<' '<<b<<' ';
        cout<< 3 * (a-1) + b;
    }
}