#include <stdio.h>

/**
 * times_table - Check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
int main(void) {
    int a = 1, b = 2, c;
    printf("%d, %d", a, b);
    for (int i = 3; i <= 98; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return (0);
}

