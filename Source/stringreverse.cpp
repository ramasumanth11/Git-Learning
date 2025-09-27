#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I love India";
    int n = strlen(str);

    printf("Original string: %s\n", str);

    // Reverse the string in place
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}