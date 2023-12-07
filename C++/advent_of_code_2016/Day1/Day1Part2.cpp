#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>
using namespace std;
ifstream fin("date.txt");
int v[3];
int numar(char p[]){
    int k = 0;
    for(int i = 1; i < strlen(p); i++)
        k = k * 10 + (p[i] - '0');
    return k;
}
int a[1001][1001];
int main()
{
    char s[1000];
    int k = 1;
    fin.get(s,1000);
    char *p = strtok(s, ", ");
    int i = 500, j = 500;
    a[i][j] = 1;
    while(p){
        char d = p[0];
        int x = numar(p);
        if(d == 'R'){
            if(k + 1 < 5) k++;
            else k = 1;
        }
        else{
            if(k - 1 > 0) k--;
            else k = 4;
        }
        if(k == 1){
            for(int l = i - 1; l >= i - x; l--)
                if(a[i][j] == 0) a[i][j] == 1;
                else{
                    cout<<abs(500 - i + 1) + abs(500 - j + 1);
                    return 0;
                }
            i = i - x;
        }
        else if(k == 2){
            for(int l = j + 1; l <= j + x; l++)
                if(a[i][j] == 0) a[i][j] == 1;
                else{
                    cout<<abs(500 - i + 1) + abs(500 - j + 1);
                    return 0;
                }
            j = j + x;
        }
        else if (k == 3){
            for(int l = i + 1; l <= i + x; l++)
                if(a[i][j] == 0) a[i][j] == 1;
                else{
                    cout<<abs(500 - i + 1) + abs(500 - j + 1);
                    return 0;
                }
            i = i + x;
        }
        else{
            for(int l = j - 1; l >= j - x; l--)
                if(a[i][j] == 0) a[i][j] == 1;
                else{
                    cout<<abs(500 - i + 1) + abs(500 - j + 1);
                    return 0;
                }
            j = j - x;
        }
        p = strtok(NULL, ", ");
    }

}