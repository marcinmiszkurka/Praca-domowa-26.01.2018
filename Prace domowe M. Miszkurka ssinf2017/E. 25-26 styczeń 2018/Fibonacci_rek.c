#include <stdio.h>

void info() {
    printf("***********************************\n");
    printf("*  WSPOL Szczytno ssinf2017 gr I  *\n");
    printf("***********************************\n\n");
    printf("Program wy\230wietlaj\245cy liczby ci\245gu Fibonacciego - rekurencyjnie\n");
}


int fibonacci(int n) {
    if (n < 3) return 1;

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    int n;
    printf("Podaj numer liczby z ci\245gu: ");
    scanf("%i", &n);
    printf("Warto\230206 wyrazu ci\245gu wynosi: %i\n", fibonacci(n));

    return 0;
}
