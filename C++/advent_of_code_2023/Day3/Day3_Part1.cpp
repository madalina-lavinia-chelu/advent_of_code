#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("date.txt");
//https://medium.com/@Mumuksia/advent-of-code-day-3-0ef91b11b879
int isNumber(char x){
    return strchr("1234567890", x);
}
int is*#+$(char x){
    if(strchr("*#+$"x))
        return 1;
    else
        return 0;
}

int main()
{
    char mat[140][141];
    int i, j;
    for(i = 0; i < 140; i++){
        fin>>mat[i];
    }

    for(i = 0; i < 140; i++){
        for(j = 0; j < 140; j++){
            if(isNumber(mat[i][j]))
            {
                ok = 0;

                if(i-1>=1){
                    if(min>a[i-1][j])
                            min = a[i-1][j];
                }
                if(i+1<=L){
                     if(min>a[i+1][j])
                             min = a[i+1][j];
                }
                if(j-1>=1){
                      if(min>a[i][j-1])
                             min = a[i][j-1];
                }
                if(j+1<=C){
                      if(min>a[i][j+1])
                             min = a[i][j+1];
                }

            }
        }
    }


    return 0;
}
