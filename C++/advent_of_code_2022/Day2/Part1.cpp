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
    char m, n;
    int s=0;
    while(fin>>m>>n)
    {
        if(n=='X') s++;
        if(n=='Y') s+=2;
        if(n=='Z') s+=3;

        if(m=='A' && n=='X')
            s+=3;
        if(m=='B' && n=='Y')
            s+=3;
        if(m=='C' && n=='Z')
            s+=3;

        if(m=='A' && n=='Y')
            s+=6;
        if(m=='B' && n=='Z')
            s+=6;
        if(m=='C' && n=='X')
            s+=6;
    }
    cout<< s ;

}