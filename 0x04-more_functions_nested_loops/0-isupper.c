#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

int main() {
    int result1 = _isupper('A');
    int result2 = _isupper('a');

    putchar(result1 + '0'); // Prints 1 (for true)
    putchar('\n');
    putchar(result2 + '0'); // Prints 0 (for false)
    putchar('\n');

    return 0;
}
