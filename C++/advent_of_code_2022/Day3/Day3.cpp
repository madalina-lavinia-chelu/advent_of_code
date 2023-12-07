#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("date.txt");
ofstream fout("date.out");


int main() {
    char s[200];
    char aux[200];
    char part1[100] = "\0";
    char part2[100] = "\0";
    int i, sum = 0, x = 0;

    while (fin >> s) {
        int fr1[53] = {0};
        int fr2[53] = {0};
        part1[0] = '\0';
        for (i = 0; i < strlen(s) / 2; i++) {
            part1[i] = s[i];
        }

        part1[i] = '\0';

        strcpy(part2, s + strlen(s) / 2);


        for (i = 0; i < strlen(part1); i++) {
            if (part1[i] >= 'a' && part1[i] <= 'z')
                fr1[part1[i] - 'a' + 1]++;

            if (part1[i] >= 'A' && part1[i] <= 'Z')
                fr1[part1[i] - 'A' + 27]++;
        }


        for (i = 0; i < strlen(part2); i++) {
            if (part2[i] >= 'a' && part2[i] <= 'z')
                fr2[part2[i] - 'a' + 1]++;

            if (part2[i] >= 'A' && part2[i] <= 'Z')
                fr2[part2[i] - 'A' + 27]++;
        }

        for (i = 1; i <= 52; i++) {

            if (fr1[i] > 0 && fr2[i] > 0) {
                sum = sum + i;
                if (i >= 1 && i <= 26)
                    cout << fr1[i] << " " << i << " " << (char) (i + 'a' - 1) << endl;
                else if (i >= 27 && i <= 52)
                    cout << fr1[i] << " " << i << " " << (char) (i + 'A' - 27) << endl;
                if (i >= 1 && i <= 26)
                    cout << fr2[i] << " " << i << " " << (char) (i + 'a' - 1) << endl;
                else if (i >= 27 && i <= 52)
                    cout << fr2[i] << " " << i << " " << (char) (i + 'A' - 27) << endl;
                cout << endl;


            }
        }
        cout << "----------------------------" << x++ << endl;
    }

    fout << "Sum: " << sum;

    /*cout << "Part 1 && 2" << endl;
    for (i = 1; i <= 52; i++) {
        if (i >= 1 && i <= 26)
            cout << fr1[i] << " " << i << " " << (char) (i + 'a' - 1) << endl;
        else if (i >= 27 && i <= 52)
            cout << fr1[i] << " " << i << " " << (char) (i + 'a' - 59) << endl;
        if (i >= 1 && i <= 26)
            cout << fr2[i] << " " << i << " " << (char) (i + 'a' - 1) << endl;
        else if (i >= 27 && i <= 52)
            cout << fr2[i] << " " << i << " " << (char) (i + 'a' - 59) << endl;

        cout<<endl;
    }*/


    return 0;
}
