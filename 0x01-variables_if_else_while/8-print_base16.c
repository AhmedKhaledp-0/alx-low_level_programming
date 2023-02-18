#include <stdio.h>
/**
  * print all the numbers of base 16 in lowercase using putchar
  *
  * Return: Always (Success)
  */
int main() {
    char c;
    for (c = '0'; c <= '9'; c++) {
        putchar(c);
    }
    for (c = 'a'; c <= 'f'; c++) {
        putchar(c);
    }
    putchar('\n');
    return 0;
}

