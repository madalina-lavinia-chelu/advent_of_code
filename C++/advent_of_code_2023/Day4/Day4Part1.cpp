#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("date.txt");

int convert(char *p) {
    int x = 0;
    for (int i = 0; i < strlen(p); i++) {
        x = x * 10 + p[i] - '0';
    }
    return x;
}
int doubleNumber(int k)
{
    if(k == 0)
        return 0;
    int x = 1;
    for(int i = 1; i < k; i++){
        x = x * 2;
    }
    return x;
}
int match(int s1[], int s2[]){
    int k = 0;
    for(int i = 0; i <= 99; i++){
        if(s1[i] == s2[i] && s1[i] != 0)
            k++;
    }
    return k;
}

int main(){
    char s[256] , *number;
    long long int pt1 = 0;

    while(fin.getline(s, 256)){
        int valid = 0, pt2 = 0;
        int s1[101] = {0}, s2[101] = {0};
        number = strtok(NULL, ":");
        number = strtok(NULL, " ");

        while(number){
            if(strcmp(number, "|")==0)
                valid = 1;

            if(valid == 0)
                s1[convert(number)] ++;
            else if(strcmp(number, "|"))
                s2[convert(number)] ++;
            number = strtok(NULL, " ");
        }
        pt1 += doubleNumber(match(s1,s2));

    }

    cout << "--- Day 4: Scratchcards ---" << endl;
    cout << "Part 1: " << pt1; //21213

}