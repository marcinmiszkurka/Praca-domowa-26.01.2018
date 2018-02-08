# Dlaczego dla preprocesingu w języku C używamy nadmiarowych nawiasów?

Preprocesor jest to program, który analizuje plik źródłowy (programu, biblioteki) w poszukiwaniu wszystkich wyrażeń zaczynających się od "#". Na podstawie tych instrukcji generuje on kod w "czystym" języku C, który następnie jest kompilowany przez kompilator. Ponieważ za pomocą preprocesora można niemal "sterować" kompilatorem, daje on niezwykłe możliwości, które nie były dotąd znane w innych językach programowania.

Przykład:<br>
>#define LICZBA 8 - spowoduje, że każde wystąpienie słowa LICZBA w kodzie zostanie zastąpione ósemką.<br>
>#define SUMA(a,b) ((a)+(b)) - spowoduje, że każde wystąpienie wywołania "funkcji" SUMA zostanie zastąpione przez sumę argumentów<br>
>#define A  5<br>
>#define B  ((2)+(A))<br>

Jeśli w miejscu wartości znajduje się wyrażenie, to należy je umieścić w nawiasach.

Makra preprocesora dokonują wymiany tekstu przed skompilowaniem kodu, co  SQR(b+5)przekłada się na (b + 5 * b + 5) = (6b + 5) = 6 * 3 + 5 = 23

Regularne wywoływanie funkcji obliczy wartość parametru (b + 3) przed przekazaniem go do funkcji, ale ponieważ makro jest wstępnie skompilowanym zamiennikiem, bardzo ważna staje się algebraiczna kolejność operacji.

Używanie b+5 jako argumentu w kodzie SQR(b+5)stanie się:, (b+5*b+5)lub (3+5*3+5). Teraz zapamiętaj zasady pierwszeństwa operatora : *wcześniej +. Jest to oceniane jako:, (3+15+5) lub 23.

Po wstępnym przetworzeniu SQR(b+5)zostanie rozszerzony do (b+5*b+5). To oczywiście nie jest poprawne. Nie załączamy argumentów makra w nawiasach w treści makra, więc jeśli te argumenty są wyrażeniami, operatory o różnych priorytetach w tych wyrażeniach mogą powodować problemy. Oto wersja, która naprawiła ten problem (nawiasy)
#define SQR(x) ((x)*(x)) 
a więc 
#define SQR(x) ({ typeof (x) _x = (x); _x * _x; })
