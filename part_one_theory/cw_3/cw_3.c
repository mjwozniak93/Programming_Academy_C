#include <stdio.h>
#include <stdbool.h>

int main(){
    // First
    int n_item = 3;
    float f_pi = 3.14;
    double e_avogadra = 6.02E23;
    char c_first_letter = 'M';
    bool b_logic = true;

    printf("Liczba calkowita: %d\n", n_item);
    printf("Liczba zmiennoprzecinkowa float: %f\n", f_pi);
    printf("Liczba zmiennoprzecinkowa double: %lf\n", e_avogadra);
    printf("Znak: %c\n", c_first_letter);
    printf("Zmienna logiczna %s\n", b_logic ? "true" : "false");

    system("PAUSE");
    return 0;
}