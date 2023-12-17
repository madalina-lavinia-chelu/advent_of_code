#include <iostream>
#include <fstream>
#include <string.h>
#include <iostream>
using namespace std;

ifstream fin("date.txt");
ofstream fout("date.out");


int main() {
    char s[201];
    char aux[201];
    char part1[101] = "\0";
    char part2[101] = "\0";
    int i, sum = 0, x = 0;

    while (fin >> s) {

        int fr1[53] = {0};
        int fr2[53] = {0};
        int fr3[53] = {0};
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

            x = 0;
        }


    }

    cout<<"Sum: "<< sum;

    return 0;
}
