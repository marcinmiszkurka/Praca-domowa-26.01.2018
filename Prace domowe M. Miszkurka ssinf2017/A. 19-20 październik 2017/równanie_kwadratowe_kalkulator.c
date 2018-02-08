#include <stdio.h>
#include <math.h>

double a, b, c, y, delta, w;
int czy_dalej = 1;

void informacje() {
    printf("***********************************\n");
    printf("*  WSPOL Szczytno ssinf2017 gr I  *\n");
    printf("***********************************\n\n");
    printf("  Kalkulator funkcji kwadratowej\n");
    printf("          y=ax^2+bx+c\n");
}
double delta_obl(double b, double a, double c) {
                                                                       //  obliczenie wyroznika trojmianu kwadratowego
                                                                     // zastosowany wzór: delta = b^2 - 4ac
    return pow(b, 2) - 4 * a * c;
}
double mz0(double b, double a) {      
                                                                   //   Obliczanie pojedynczego miejsca zerowego
    double mz0;
    mz0 = (-b - sqrt(delta)) / (2 * a);
    printf("X0 = %f\n", mz0);
    return 0;
}
double mz1(double b, double delta, double a) {
                                                                 //  Obliczanie pierwszego miejsca zerowego
    double mz1;
    mz1 = (-b - sqrt(delta)) / (2 * a);
    printf("X1 = %f\n", mz1);
    return 0;
}
double mz2(double b, double delta, double a) {
                                                                 //   Obliczanie pierwszego miejsca zerowego
    double mz2;
    mz2 = (-b + sqrt(delta)) / (2 * a);
    printf("X2 = %f\n", mz2);
    return 0;
}
double wierzcholek(double b, double delta, double a) {
                                                                 //    Obliczanie pierwszego miejsca zerowego
    double wx, wy;
    wx = -b / (2 * a);
    wy = -delta / (4 * a);
    printf("Wspolrzedne wierzcholka:\nW(%f, %f)\n", wx, wy);
    return 0;
}
int main() {
    while (czy_dalej == 1) {                             // Petla kontynuacji
        informacje();                                   // Kolejno nastąpi pobranie wartosci od uzytkownika
        printf("\nPodaj wartosc a: ");
        scanf("%lf", &a);
        printf("\nPodaj wartosc b: ");
        scanf("%lf", &b);
        printf("\nPodaj wartosc c: ");
        scanf("%lf", &c);
        if (a != 0) {
            if (a > 0) {
                printf("\nParabola funkcji posiada ramiona skierowane w gore. U\n");
            } else {
                printf("\nParabola funkcji posiada ramiona skierowane w dol.\n");
            }
            delta = delta_obl(b, a, c);
            printf("Wyroznik trojmianu kwadratowego wynosi: %f\n", delta); 
            if (delta < 0) {                                                             // Szukanie miejsc zerowych
                printf("Delta ujemna - brak miejsc zerowych (brak rozwiazan)\n");
            } else {
                if (delta == 0) {
                    printf("Delta wynosi 0 - jedno miejsce zerowe (jedno rozwiazanie)\n");
                    mz0(b, a);
                }
                if (delta > 0) {
                    printf("Delta wieksza od 0 - dwa miejsca zerowe (dwa rozwiazania)\n");
                    mz1(b, delta, a);
                    mz2(b, delta, a);
                }
            }
              if (delta == 0) {                                                        //  Szukanie wierzcholka wykresu
                printf("Delta wynosi 0 - wiercholek w punkcie X0\n");
                mz0(b, a);
            } else {
                wierzcholek(b, delta, a);
            } 
            if (c == 0) {                                                             // Szukanie punktu przeciecia z osia 0Y
                printf("c wynosi 0 - funkcja nie przecina osi 0Y \n");
            } else {
                printf("Funkcja przecina os 0Y w punkcie: (0,%f),\n", c);
            }
        } else {
            printf("\nFunkcja liniowa - obliczenia niedostepne w tej wersji programu\n");
        }
        printf("Czy chcesz dalej liczyc? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }
    return 0;
}
