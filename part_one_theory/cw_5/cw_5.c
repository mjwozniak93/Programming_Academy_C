#include <stdio.h>

int Global_Var = 1;

int main() {
    const int n_legs_mammals = 4;
    const float f_zero_absolutne = -273.15;

    printf("Liczba nog u ssakow to %d\n", n_legs_mammals);
    printf("Zero bezwzględne to %f stopni C\n", f_zero_absolutne);
    Global_Var = 5;
    printf("Zmienna globalna ma wartosc %d\n", Global_Var);
    system("PAUSE");
    return 0;
}