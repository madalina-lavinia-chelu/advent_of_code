#include <stdio.h>

void runIntcode(int *program, int size) {
    for (int i = 0; i < size; i += 4) {
        int opcode = program[i];

        if (opcode == 99) {
            // Halt the program
            break;
        }

        int operand1 = program[program[i + 1]];
        int operand2 = program[program[i + 2]];
        int resultIndex = program[i + 3];

        if (opcode == 1) {
            // Addition
            program[resultIndex] = operand1 + operand2;
        } else if (opcode == 2) {
            // Multiplication
            program[resultIndex] = operand1 * operand2;
        }
    }
}

int main() {
    int v[] = {1,9,10,3,2,3,11,0,99,30,40,50};
    int n = sizeof(v) / sizeof(v[0]);

    // Restore gravity assist program
    v[1] = 9;
    v[2] = 10;

    runIntcode(v, n);

    // Print the value left at position 0
    printf("Value at position 0: %d\n", v[0]);

    return 0;
}
