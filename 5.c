#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Informe uma string para inverter: ");
    scanf("%99s", str);

    reverseString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
