#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    float f_number = 56.23;
    char letter = 'Z';
    char *word = "Slowo";
    a = 8;
    b = 34;
    int c = a + b;
    double gold_number = 1.6180339; // First
    bool b_logic = false; // First
    char *s_world = "Hello, World!!!"; //Second

    printf("%d \r\n", c);
    printf("%f \r\n", f_number);
    printf("%c \r\n", letter);
    printf("%s \r\n", word);
    printf("%lf \n",gold_number); // First
    printf("%s\n",b_logic ? "true" : "false"); // First
    printf("%s\n",s_world); //Second

    system("PAUSE");
    return 0;
}