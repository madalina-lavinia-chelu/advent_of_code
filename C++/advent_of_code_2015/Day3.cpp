#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fisier.txt");

int main() {
    // Alocare dinamică pentru matrice
    int** a = new int*[10000];
    for (int i = 0; i < 10000; ++i) {
        a[i] = new int[10000]();  // Inițializare cu zero
    }

    int x = 10000/2;
    int y = 10000/2;
    int s = 1; // Să începem cu 1 pentru poziția inițială
    char c;

    while (fin >> c) {
        if (c == '<')
            x = x - 1;
        if (c == '>')
            x = x + 1;
        if (c == '^')
            y = y + 1;
        if (c == 'v')
            y = y - 1;

        a[x][y]++;
    }

    // Calculul numărului de poziții unice vizitate
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            if (a[i][j] > 0) {
                s++;
            }
        }
    }

    cout << "The number of unique positions visited is: " << s << endl;

    // Eliberare memorie alocată dinamic
    for (int i = 0; i < 10000; ++i) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
