#include <stdio.h>
#include <stdbool.h>

int main() {
    // First
    printf("int: %d \r\n", sizeof(int));                                        // Uprzejmie przepraszam za wprowadzenie w błąd
    printf("float: %d \r\n", sizeof(float));                                    // \r\n powinniśmy używać w systemie Windows to prawda
    printf("double: %d \r\n", sizeof(double));                                  // Natomiast sam program jest otwierany za pomocą MinGW
    printf("char: %d \r\n", sizeof(char));                                      // A więc nakładką na środowisko UNIX dlatego powinno 
    printf("bool: %d \r\n\n", sizeof(bool));                                    // używać się \n
                                                                                // Stosowne poprawki pojawią się w dokumentach szkoleniowych
    // Second
    printf("Wyswietlam liczbe: %d\n\n",4);

    // Third
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,1,2,3,4,5,6,7,8,9);

    system("PAUSE");
    return 0;
}