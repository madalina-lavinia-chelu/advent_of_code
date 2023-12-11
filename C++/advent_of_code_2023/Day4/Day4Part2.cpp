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
    int cards = 192;
    long long int pt2 = 0;

    while(fin.getline(s, 256)){

        int copies[192] = {1};
        int s1[1001] = {0}, s2[1001] = {0},reward = 1, nmatches = 0;
        int valid = 0, x = 0, y = 0;

        number = strtok(s, " ");
        number = strtok(NULL, ":");
        number = strtok(NULL, " ");


        while(number){
            if(strcmp(number, "|")==0)
                valid = 1;

            if(valid == 0)
                s1[x++] = convert(number);
            else if(strcmp(number, "|"))
                s2[y++] = convert(number);
            number = strtok(NULL, " ");
        }
        for(int i = 0; i < x; i++){
            for(int j = 0; j <=y; j++){
                if(s1[i] == s2[j]){
                    nmatches++;
                    pt2 += copies[i];
                    copies[i+nmatches] += copies[i];
                    //break;
                }
            }
        }
        //cout<<nmatches<<endl;


    }

    cout << "--- Day 4: Scratchcards ---" << endl;
    cout << "Part 2: " << pt2; //21213

}