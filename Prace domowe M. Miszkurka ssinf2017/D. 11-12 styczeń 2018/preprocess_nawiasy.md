# Dlaczego dla preprocesingu w języku C używamy nadmiarowych nawiasów?

Preprocesor jest to program, który analizuje plik źródłowy (programu, biblioteki) w poszukiwaniu wszystkich wyrażeń zaczynających się od "#". Na podstawie tych instrukcji generuje on kod w "czystym" języku C, który następnie jest kompilowany przez kompilator. Ponieważ za pomocą preprocesora można niemal "sterować" kompilatorem, daje on niezwykłe możliwości, które nie były dotąd znane w innych językach programowania.

Przykład:<br>
>#define LICZBA 8 - spowoduje, że każde wystąpienie słowa LICZBA w kodzie zostanie zastąpione ósemką.<br>
>#define SUMA(a,b) ((a)+(b)) - spowoduje, że każde wystąpienie wywołania "funkcji" SUMA zostanie zastąpione przez sumę argumentów<br>
>#define A  5<br>
>#define B  ((2)+(A))<br>

Unikniemy w ten sposób niespodzianek związanych z priorytetem operatorów :<br>

<#include <stdio.h>
<
<#define SIX 1+5
<#define NINE 8+1
<
<int main(void)
<{
<    printf("%d * %d = %d\n", SIX, NINE, SIX * NINE);
<    return 0;
<
<}

Po skompilowaniu i uruchomieniu programu otrzymujemy:

<6 * 9 = 42
a powinno być:

<6 * 9 = 54
Przyczyną błędu jest interpretacja wyrażenia:

<1+5*8+1
Ze względu na brak nawiasów i priorytet operatorów (wyższy * niż +) jest to interpretowane jako:

<1+(5*8)+1 
a nie jak:

<(1+5)*(8+1)

Jeśli w miejscu wartości znajduje się wyrażenie, to należy je umieścić w nawiasach.
