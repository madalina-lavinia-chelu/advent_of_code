#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("date.txt");
ofstream fout("date.out");

int fr1[53] = {0};
int fr2[53] = {0};
int fr3[53] = {0};

int main() {
    char s[200];
    char aux[200];
    char part1[100] = "\0";
    char part2[100] = "\0";
    int i, sum = 0, x = 0;

    while (fin >> s) {

        x++;

        if(x == 1)
            for (i = 0; i < strlen(s); i++) {
                if (s[i] >= 'a' && s[i] <= 'z')
                    fr1[s[i] - 'a' + 1]++;

                if (s[i] >= 'A' && s[i] <= 'Z')
                    fr1[s[i] - 'A' + 27]++;
            }

        if(x == 2)
            for (i = 0; i < strlen(s); i++) {
                if (s[i] >= 'a' && s[i] <= 'z')
                    fr2[s[i] - 'a' + 1]++;

                if (s[i] >= 'A' && s[i] <= 'Z')
                    fr2[s[i] - 'A' + 27]++;
            }

        if(x == 3)
            for (i = 0; i < strlen(s); i++) {
                if (s[i] >= 'a' && s[i] <= 'z')
                    fr3[s[i] - 'a' + 1]++;

                if (s[i] >= 'A' && s[i] <= 'Z')
                    fr3[s[i] - 'A' + 27]++;
            }

        if (x == 3){
            for (i = 1; i <= 52; i++)
                if(fr1[i] > 0 && fr2[i] > 0 && fr3[i] > 0)
                    sum = sum + i;
            for (i = 1; i <= 52; i++){
                fr1[i] = 0;
                fr2[i] = 0;
                fr3[i] = 0;
            }
            x = 0;
        }


    }

    cout<<"Sum: "<< sum;

    return 0;
}
