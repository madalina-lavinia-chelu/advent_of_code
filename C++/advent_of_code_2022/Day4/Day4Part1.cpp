#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
ifstream fin("date.txt");

int main() {


    int contor = 0, contor2 = 0;
    char s[100];
    while(fin >> s){
        int part1 = 0, part2 = 0, part3 = 0, part4 = 0;

        int fr1[201];
        int fr2[201];
        int d[201];
        int i, j, k, z;


        for( i = 0; i < strlen(s); i++)
        {
            if(s[i] !=  '-' ){
                part1 = part1 * 10 + (s[i] - '0');

            } else
                break;
        }

        for( j = i + 1; j < strlen(s); j++)
        {

            if(s[j] !=  ',' ){
                part2 = part2 * 10 + (s[j] - '0');
            } else
                break;
        }

        for( k = j + 1; k < strlen(s); k++)
        {

            if(s[k] !=  '-' ){
                part3 = part3 * 10 + (s[k] - '0');
            } else
                break;
        }

        for( z = k + 1; z < strlen(s); z++)
        {

            if(s[z] !=  '-' ){
                part4 = part4 * 10 + (s[z] - '0');
            } else
                break;
        }
        if ((part1 <= part3 && part2 >= part4) || (part3 <= part1 && part4 >= part2))
            contor++;

        // Aufgabe 2
        if ((part1 >= part3 && part1 <= part4) || (part1 <= part3 && part2 >= part3))
            contor2 += 1;

    }
    cout<<contor;
    return 0;
}
