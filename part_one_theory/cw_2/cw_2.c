#include <stdio.h>
#include <stdbool.h>

int main() {
    // First
    printf("int: %d \n", sizeof(int));
    printf("float: %d \n", sizeof(float));
    printf("double: %d \n", sizeof(double));
    printf("char: %d \n", sizeof(char));
    printf("bool: %d \n\n", sizeof(bool));

    // Second
    printf("Wyswietlam liczbe: %d\n\n", 4);

    // Third
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);

    system("PAUSE");
    return 0;
}