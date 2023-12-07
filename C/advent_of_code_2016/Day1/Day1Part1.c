#include <stdio.h>
#include <stdlib.h>

// Funcție pentru actualizarea direcției curente în funcție de o întoarcere
char intoarcere(char directieCurenta, char instructiune) {
    if (instructiune == 'R') {
        return (directieCurenta == 'N') ? 'E' : (directieCurenta == 'E') ? 'S' : (directieCurenta == 'S') ? 'V' : 'N';
    } else {
        return (directieCurenta == 'N') ? 'V' : (directieCurenta == 'V') ? 'S' : (directieCurenta == 'S') ? 'E' : 'N';
    }
}

// Funcție pentru calcularea distanței în funcție de instrucțiuni
int calculareDistanta(char directie, int distanta, int *x, int *y) {
    switch (directie) {
        case 'N':
            *y += distanta;
            break;
        case 'E':
            *x += distanta;
            break;
        case 'S':
            *y -= distanta;
            break;
        case 'V':
            *x -= distanta;
            break;
    }
    return abs(*x) + abs(*y); // Distanța Manhattan
}

int main() {
    char directieCurenta = 'N';
    char instructiune;
    int distanta, x = 0, y = 0;

    // Citirea și procesarea instrucțiunilor
    while (scanf("%c%d, ", &instructiune, &distanta) == 2) {
        directieCurenta = intoarcere(directieCurenta, instructiune);
        calculareDistanta(directieCurenta, distanta, &x, &y);
    }

    // Calcularea distanței finale
    int distantaFinala = abs(x) + abs(y);

    printf("Cel mai scurt drum către destinație are %d blocuri distanță.\n", distantaFinala);
    //298 
    return 0;
}
