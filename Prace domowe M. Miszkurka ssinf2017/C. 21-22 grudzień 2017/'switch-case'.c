#include <stdio.h>

double mnoz(double a, double b) {
    printf("Wynik mno\253enia: %lf\n", a * b);
    return 0;
}
double dziel(double a, double b) {
    printf("Wynik dzielenia: %lf\n", a / b);
    return 0;
}
double dodaj(double a, double b) {
    printf("Wynik dodawania: %lf\n", a + b);
    return 0;
}
double odejmowanie(double a, double b) {
    printf("Wynik odejmowania: %lf\n", a - b);
    return 0;
}
double licz(double a, double b, char wybor) {
                                    //Wybor na podstawie switch
    switch (wybor) {
        case '+':
            dodaj(a, b);
            break;
        case '-':
            odejmowanie(a, b);
            break;
        case '*':
            mnoz(a, b);
            break;
        case '/':
            dziel(a, b);
            break;

        default:
            printf("B\210\251dny wyb\242r\n");
            break;
    }
    return 0;
}
int main() {
    double a, b;
    char wybor;
    int czy_dalej = 1;
    while (czy_dalej == 1) {
        printf("***********************************\n");
        printf("*  WSPOL Szczytno ssinf2017 gr I  *\n");
        printf("***********************************\n");
        printf("*    Kalkulator Zwykły + - * /    *\n\n");
        printf("Podaj pierwsz\245 liczb\251\n");
        scanf("%lf", &a);           //wpisanie z klaw, a następnie podanie do wybor
        printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
        scanf(" %c", &wybor);       //wpisanie z klaw, a następnie podanie do wybor

        printf("Podaj drug\245 liczbe\n");
        scanf("%lf", &b);           //wpisanie z klaw, a następnie podanie do wybor
        licz(a, b, wybor);
        printf("Czy chcesz liczyc kolejne liczby? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }

    return 0;
}
