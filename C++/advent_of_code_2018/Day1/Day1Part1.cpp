#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin ("date.txt");

int convert(char s[]){
    int x = 0;
    for(int i = 0; i < strlen(s); i++){
        x = x * 10 + s[i] - '0';
    }
    return x;
}

int main(){
    char s[101];
    int output = 0;

    while(fin>>s){
        if(s[0] == '+')
            output += convert(s + 1);
        else
            output -= convert(s + 1);
    }
    cout << "--- Day 1: Chronal Calibration ---" << endl;
    cout<<output;  //439
}