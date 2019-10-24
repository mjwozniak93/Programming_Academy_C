#include <stdio.h>

int main() {
    // First
    printf("Podaj liczbe nog oraz powierzchnie mieszkania (bez spacji): ");
    char c_legs = getchar();                 /* Podaj liczbe 423. Cztery to liczba
                                              * nog natmiast 23 to powierzchnia
                                              */
    printf("\nLiczba nog to: %c\n", c_legs);
    
    char s_area[2];
    gets(s_area);
    printf("Powierzchnia mieszkania to %s m^2\n", s_area);

    int n_droga;
    printf("Podaj droge ze Szczecina do Stargardu: ");
    scanf("%d", &n_droga);
    printf("\nDroga ze Szczecina do Stargardu to %d km\n", n_droga);
    
    // Second
    double a, b, c, d;
    printf("Podaj boki trapezu (oddziel boki spacja): "); // Podaj do konsoli wartość 14.1 6.7 6.7 21.6
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("\nBoki trapezu to odpowiednio %lf %lf %lf %lf\n", a, b, c, d);
    system("PAUSE");
    return 0;
}