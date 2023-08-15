#include "main.h"
/*
 * _islower - Checking for lowercase
 * @c: The character to be checked
 *
 * Return: 1 for lowercase or 0 for others
 */
int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return (1);
    } else {
        return (0);
    }
}
