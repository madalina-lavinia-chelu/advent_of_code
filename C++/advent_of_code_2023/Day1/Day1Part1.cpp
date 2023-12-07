#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int main()
{
    char s[256];
    int sum = 0;

    while(fin>>s){
        int nr1 = 0, nr2 = 0, number;

        for(int i = 0; i < strlen(s); i ++){
            if(strchr("1234567890", s[i]))
            {
                if(!nr1)
                    nr1 = s[i] - '0';
                nr2 = s[i] - '0';
            }
        }
        number = nr1 * 10 + nr2;
        sum += number;
    }
    cout<<sum; //55834

    return 0;
}
