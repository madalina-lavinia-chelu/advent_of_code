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

int possibleSet(char *number, char * color){

    if (!strcmp(color, "red")) {
        if (convert(number) > 12) {
            return 0;
        }
    } else if (!strcmp(color, "green")) {
        if (convert(number) > 13) {
            return 0;
        }
    } else if (!strcmp(color, "blue")) {
        if (convert(number) > 14) {
            return 0;
        }
    }
    return 1;

}

int possibleSetV2(char *number, char *color) {
    int limit;

    if (!strcmp(color, "red")) {
        limit = 12;
    } else if (!strcmp(color, "green")) {
        limit = 13;
    } else if (!strcmp(color, "blue")) {
        limit = 14;
    }

    return (convert(number) <= limit);
}

void processGame(char *gameInfo, int &pt1) {
    char *numberGame, *cubes;
    int valid = 1;

    numberGame = strtok(gameInfo, " ");
    numberGame = strtok(NULL, ":");
    cubes = strtok(NULL, " ");

    while (cubes) {
        char *number = cubes;
        cubes = strtok(NULL, ";, ");
        char *color = cubes;

        if (!possibleSet(number, color)) {
            valid = 0;
        }

        cubes = strtok(NULL, ";, ");
    }

    if (valid) {
        pt1 += convert(numberGame);
    }
}

int main() {
    char s[256];
    int pt1 = 0;

    while (fin.getline(s, 256)) {
        processGame(s, pt1);
    }

    cout << "--- Day 2: Cube Conundrum ---" << endl;
    cout << "Part 1: " << pt1;

    return 0;
}
