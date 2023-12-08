#include <iostream>
#include <cmath>
//https://www.pbinfo.ro/probleme/211/spirala
int findDistance(int inputNumber) {
    // Găsește dimensiunea matricei pentru a cuprinde numărul dat
    int matrixSize = 1;
    while (matrixSize * matrixSize < inputNumber) {
        matrixSize += 2;
    }

    // Găsește distanța până la mijlocul fiecărui cerc
    int midpoints[4];
    for (int i = 0; i < 4; ++i) {
        midpoints[i] = matrixSize * matrixSize - i * (matrixSize - 1) - matrixSize / 2;
    }

    // Găsește distanța Manhattan pentru fiecare cerc
    int distances[4];
    for (int i = 0; i < 4; ++i) {
        distances[i] = std::abs(inputNumber - midpoints[i]);
    }

    // Returnează distanța minimă
    int minDistance = distances[0];
    for (int i = 1; i < 4; ++i) {
        if (distances[i] < minDistance) {
            minDistance = distances[i];
        }
    }

    // Adaugă distanța până la mijlocul matricei pentru a obține distanța totală
    return minDistance + matrixSize / 2;
}

int main() {
    // Input-ul din problema ta
    int inputNumber = 289326;

    // Calculează și afișează rezultatul
    int result = findDistance(inputNumber);
    std::cout << "Distanța până la accesul principal este: " << result << std::endl;

    return 0;
}
