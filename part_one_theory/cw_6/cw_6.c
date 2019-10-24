#include <stdio.h>

int main() {
    short n_dog = 4;
    unsigned short n_triple_six = 6;
    long n_cat = 6;
    unsigned long n_horse = 15;
    double e_promien = 160000000;

    printf("Ilosc psow na podworku to %hi\n", n_dog);
    printf("W darcie potrojna szostka to %hu\n", n_triple_six); /* po przypisaniu wartości 
                                                                 * -1 (poza zakresem) zmiennej
                                                                 * wyswietlona zostaje max wartosc
                                                                 * unsigned short + wartosc zmiennej
                                                                 * tzw. przekrecenie licznika
                                                                 */
    printf("Ilosc kotow w domu to %li\n", n_cat);
    printf("Ilosc koni w stadninie to %lu\n", n_horse);
    printf("Promien wynosi %g km", e_promien);

    system("PAUSE");
    return 0;
}