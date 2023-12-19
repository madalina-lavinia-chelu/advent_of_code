#include <iostream>
#include <vector>

void executaIntcode(std::vector<int>& program) {
    for (size_t i = 0; i < program.size(); i += 4) {
        int codOp = program[i];

        if (codOp == 99) {
            // Opriți programul
            break;
        }

        int operand1 = program[program[i + 1]];
        int operand2 = program[program[i + 2]];
        int indexRezultat = program[i + 3];

        if (codOp == 1) {
            // Adunare
            program[indexRezultat] = operand1 + operand2;
        } else if (codOp == 2) {
            // Înmulțire
            program[indexRezultat] = operand1 * operand2;
        }
    }
}

int main() {
    std::vector<int> program = {1, 9, 10, 3, 2, 3, 11, 0, 99, 30, 40, 50};

    // Restabilirea programului de asistență gravitațională
    program[1] = 9;
    program[2] = 10;

    executaIntcode(program);

    // Afișarea valorii rămase la poziția 0
    std::cout << "Valoarea la poziția 0: " << program[0] << std::endl;

    return 0;
}
