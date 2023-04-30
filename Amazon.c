#include <stdio.h>
#include <string.h>
#include <math.h>

void binary_to_string(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; i += 8) {
        int sum = 0;
        for (int j = i; j < i + 8; j++) {
            sum += (s[j] - '0') * pow(2, 7 - j + i);
        }
        putchar(sum);
    }
}

int main() {
    char str[100];
    printf("Enter binary representation of the string: ");
    gets(str);
    printf("String: ");
    binary_to_string(str);
    return 0;
}
