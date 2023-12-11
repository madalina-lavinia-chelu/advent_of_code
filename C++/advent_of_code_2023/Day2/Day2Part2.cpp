#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("date.txt");
int maxx[3];
int convert(char *p){
    int x = 0;
    for(int i = 0; i < strlen(p); i++){
        x = x * 10 + p[i] - '0';
    }
    return x;
}
void possibleSet(char *number, char * color){
    char colors[3][6] = {"red", "green", "blue"};

    for(int i = 0; i < 3; i++){
        if (strcmp(color, colors[i]) == 0)
            if (convert(number) > maxx[i]) {
                maxx[i] = convert(number);
                break;
            }
    }

}
void possibleSetV2(char *number, char * color)
{
    if (!strcmp(color, "red")) {

        if (convert(number) > maxx[0]) {
            maxx[0] = convert(number);
        }
    } else if (!strcmp(color, "green")) {

        if (convert(number) > maxx[1]) {
            maxx[1] = convert(number);
        }
    } else if (!strcmp(color, "blue")) {

        if (convert(number) > maxx[2]) {
            maxx[2] = convert(number);
        }
    }
}
int main(){
    char gameCubes[4][10], *number, *color, *cp;
    int valid, pt2 = 0;
    char s[256], *numberGame, *cubes;

    while(fin.getline(s, 256)){
        for(int i = 0; i < 3; i++){
            maxx[i] = 0;
        }

        numberGame = strtok(s, " ");
        numberGame = strtok(NULL, ":");
        cubes = strtok(NULL, " ");
        while(cubes){

            number = cubes;
            cubes = strtok(NULL, ";, ");
            color = cubes;
            possibleSet(number, color);
            cubes = strtok(NULL, ";, ");

        }
        //cout<<maxx[0] * maxx[1] * maxx[2]<<endl;
        pt2 += maxx[0] * maxx[1] * maxx[2];
    }
    cout << "--- Day 2: Cube Conundrum ---"<<endl;
    cout << "Part 2: "<<pt2; //54699




}