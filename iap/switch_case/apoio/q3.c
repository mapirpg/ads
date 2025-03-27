#include <stdio.h>

int main() {
    char letra = ' ';

    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("A letra digitada é uma vogal.\n");
            break;
        case 'b': case 'B':
        case 'c': case 'C':
        case 'd': case 'D':
        case 'f': case 'F':
        case 'g': case 'G':
        case 'h': case 'H':
        case 'j': case 'J':
        case 'k': case 'K':
        case 'l': case 'L':
        case 'm': case 'M':
        case 'n': case 'N':
        case 'p': case 'P':
        case 'q': case 'Q':
        case 'r': case 'R':
        case 's': case 'S':
        case 't': case 'T':
        case 'v': case 'V':
        case 'w': case 'W':
        case 'x': case 'X':
        case 'y': case 'Y':
        case 'z': case 'Z':
            printf("A letra digitada é uma consoante.\n");
            break;
        default:
            printf("Caractere inválido.\n");
    }

    return 0;
}