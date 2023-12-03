#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
ifstream fin("date.txt");

int main(){

    /*
        A/X -> Rock (+1)
        B/Y -> Paper (+2)
        C/Z -> Scrissor (+3)

        plus
            * +0 daca ai pierdit
            * +3 daca este egal
            * +6 daca ai castigat
        first colum is opponent
        second colum is me

        A Y -> 1 vs 2 -> 2(scor me) + 6 (bonus)
        B X -> 2 vs 1 -> 1 + 0
        C Z -> 3 vs 3 -> 3 + 3 = 6
        --------------------------
                             total = 15 p
    */
    char opponent[5][5], me[5][5];
    char s[256];
    int sum = 0;
    opponent[1]= 'A';
    opponent[2]= 'B';
    opponent[3]= 'C';

    me[1] = 'X';
    me[2] = 'Y';
    me[3] = 'Z';
    while(fin>>s){

        int yourScore = 0;
        int opponentScore = 0;
        int roundScore = 0;
        for(int i = 1; i < 3; i++)
            if(s[0] == opponent[i])
                opponentScore = i;
        for(int i = 1; i < 3; i++)
            if(s[0] == me[i])
                yourScore = i;

        if(opponentScore < yourScore)
            roundScore = yourScore + 6;
        else if( opponent > yourScore)
            roundScore = yourScore + 1;
        else
            roundScore = roundScore + 3;
        sum += roundScore;
    }
    cout<<sum;
}