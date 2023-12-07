#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("date.txt");

bool isNumber(char s){
    return strchr("1234567890", s);
}

int find_spelled_number(char* str) {
    if (strncmp(str, "one", 3) == 0) {
        return 1;
    } else if (strncmp(str, "two", 3) == 0) {
        return 2;
    } else if (strncmp(str, "three", 5) == 0) {
        return 3;
    } else if (strncmp(str, "four", 4) == 0) {
        return 4;
    } else if (strncmp(str, "five", 4) == 0) {
        return 5;
    } else if (strncmp(str, "six", 3) == 0) {
        return 6;
    } else if (strncmp(str, "seven", 5) == 0) {
        return 7;
    } else if (strncmp(str, "eight", 5) == 0) {
        return 8;
    } else if (strncmp(str, "nine", 4) == 0) {
        return 9;
    }

    return 0;
}


int get_first_number(char str[], int part) {
    int number;

    for (int i = 0; i < strlen(str); i++) {
        if (part == 2) {
            if ((number = find_spelled_number(str + i))) {
                return number;
            }
    }

    if (isNumber(str[i])) {
        return str[i] - '0';
        }
    }

    return 0;
}


int get_last_number(char str[], int part) {
    int number;

    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (part == 2) {
            if ((number = find_spelled_number(str + i))) {
                return number;
            }
    }

    if (isNumber(str[i])) {
        return str[i] - '0';
        }
    }

    return 0;
}


int main() {
    char line[256];
    int results[2] = {0, 0};


    while (fin>>line) {
        for (int r = 1; r <= 2; r++) {
            results[r - 1] += 10 * get_first_number(line, r) + get_last_number(line, r);
        }
  }


    cout<<"Sum of all of the calibration values (1): "<< results[0]<<endl;
    cout<<"Sum of all of the calibration values (2): "<< results[1]<<endl;

  return 0;
}