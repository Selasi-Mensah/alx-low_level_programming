#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 
 *
 * Return: void
 */

void print_alphabet_x10(void) {
    char letter = 'a';
    int count = 0;

    while (count < 10) {
        for (letter = 'a'; letter <= 'z'; letter++) {
            _putchar(letter);
        }
        count++;
    }

    _putchar('\n');
}
