#include <stdio.h>

void info() {
	printf("********************************************************\n");
	printf("*	   WSPOL Szczytno  ssinf2017  grI 		*\n");
	printf("********************************************************\n");
	printf("Program wy\230wietl\245jacy liczby ci\245gu Fibonacciego\n");
}
int main(void) {
    int n, i, czy_dalej = 1;;
    info();
    while (czy_dalej == 1) {
        printf("Ile cyfr ci\245gu zwr\242ci\206: \n");
        scanf("%i", &n);
        long long int ciag[n - 1];
        				//Dodanie 2 poczatkowych cyfr do ciagu
        ciag[0] = 0;
        ciag[1] = 1;
        				//Dodawanie kolejnych liczb fibo do tablicy
        for (i = 2; i < n; i++) {
            ciag[i] = ciag[i - 2] + ciag[i - 1];
        }
        printf("Liczby Fibonacciego: \n");	        //Wyswietlenie ciagu
        for (i = 0; i < n; i++) {
            if (ciag[i] < 0) {
                printf("B\210\245d - przekroczono zakres zmiennej dla %i liczby ci\245gu", i + 1);
                break;
            }
            printf("%lli, ", ciag[i]);
        }
        printf("\n");
        printf("Czy chcesz liczyc dalej dla innych liczb? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }

}
