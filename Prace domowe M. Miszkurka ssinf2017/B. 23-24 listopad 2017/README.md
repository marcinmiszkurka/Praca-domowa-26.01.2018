<p># Praca_w_domu_zadana_24.11.2017<p>
<p>   <h1> I - POZYCYJNE SYSTEMY LICZBOWE (2,8,10,16) <br><p></h1>
<p><h3>TEMAT 1 - SYSTEM DWÓJKOWY (binarny (BIN) ) (2) </h3><hr>
  Dwójkowy system liczbowy, system binarny – pozycyjny system liczbowy, w którym podstawą jest liczba 2. Do zapisu liczb potrzebne są tylko dwie cyfry: 0 i 1. <br>
  W systemie dwójkowym występują dwie cyfry: 0, 1. <br>
  <p>Przykład : 0111(2) = 0*23 + 1*22 + 1*21 +1*20 = 0 + 4 + 2 + 1 = 7(10) <br><p> => 0111 mają kolejno wagę od lewej 8, 4, 2, 1. Aby szybciej przeliczyć można wagi bitów oznaczonych 1 zsumować czyli od lewej 4+2+1 = 7. 
  <br><br><br><p>
<p>  <h3>TEMAT 2 - SYSTEM ÓSEMKOWY (oktalny (OKT) ) (8)</h3><hr>
 Ósemkowy system liczbowy - mamy osiem cyfr: 0, 1, 2,…,7 gdzie 0 liczone jest jako cyfra pierwsza. Podstawą systemu jest liczba 8. <br>
  Przykład : 271(8) = (2*8 do pot 2) + (7*8 do pot 1) + (1*8 do pot 0) = 128 + 56 + 1 = 185(10)
  <br><br><br><p>
<p>  <h3>TEMAT 3 - SYSTEM DZIESIĘTNY (10)</h3><hr>
    Dziesiętny system liczbowy to cyfry, którymi posługujemy się na co dzień. 0,1,2,3,4,5,6,7,8,9,. Podstawą systemu dziesiętnego jest liczba 10.<br>
  Przykład : 156 = (1*10 do pot 2) + (5*10 do pot 1) + (6*10 do pot 0) = 100 + 50 + 6 = 156
<br><br><br><p>
<p><h3> TEMAT 4 - system szesnastkowy (heksegalny (HEX)) (16)</h3><hr>
    Szesnastkowy system liczbowy opiera się na cyfrach i literach od 0-9 i od A-F (wszystkich 16) gdzie każdej cyfrze przyporządkowano cztery cyfry w systemie 01. i tak. <br><p>
    <p>0 - 0000 -- 0<br>
    1 - 0001 -- 1<br>
    2 - 0010 -- 2<br>
    3 - 0011 -- 3<br>
    4 - 0100 -- 4<br>
    5 - 0101 -- 5<br>
    6 - 0110 -- 6<br>
    7 - 0111 -- 7<br>
    8 - 1000 -- 8<br>
    9 - 1001 -- 9<br>
    A - 1010 -- 10<br>
    B - 1011 -- 11<br>
    C - 1100 -- 12<br>
    D - 1101 -- 13<br>
    E - 1110 -- 14<br>
    F - 1111 -- 15<br><p>
   <p> Podstawą systemu jest 16. <br>
      Przykład : E7(16) = (D*16 do pot 1)+(7*16do pot 0) = (14*16)+(7*16) = 336(10)<br><p>
<p> <h1>II - KONWERSJA (10 =>2; 2=>16)</h1><br>
    1). Z systemu dziesiętnego (10) do systemu dwójkowego (2) <br>
    2). Z systemu dwójkowego (2) do szesnastkowego (16)<br><p> 
 <p> <h3>TEMAT 1 - (10 do 2)</h3><hr>
 Konwersja, czyli zamiana liczby dziesiętnej na system binarny odbywa się metodą dzielenia, lub można skorzystać z tablicy jeżeli mamy do czynienia z liczbami od 0 do 15. większe liczby trzeba policzyć korzystając z poniższego przykładu. 
 Dla liczby 16:<p> <br>
 16/2 = 8 reszty 0 wpisujemy ] 0, wynik dzielenia to 8 więc przepisujemy niżej 8.<br>
  8/2 = 4 reszty 0 wpisujemy ] 0, wynik dzielenia 4 więc wpisujemy niżej 4<br>
  4/2 = 2 reszty 0 wpisujemy ] 0, i analogicznie<br>
  2/2 = 1 reszty 1 wpisujemy ] 0 <br>
  zostaje 1        wpisujemy ] 1 (jeden podzielić na 2 to zawsze jest 0,5 a więc zostaje reszta, a jak reszta to 1)<br>
  Teraz wystarczy od dołu do góry sczytać liczby i kolejno je zapisać. Mamy 10000(2). <br>
 <p><h3>TEMAT 2 - (2 do 16)</h3><hr><p>
 <p>Konwersja liczby binarnej do szesnastkowej odbywa sę po przez dzielenie liczby binarnej na cztery bitu, a następnie korzystając z tablicy ( zadanie I Temat 4) odczytujemy i podstawiamy właściwe wartości. <br>
 Przykład :  365(10) = 101101101(2)<br>
 od lewej do prawej dzielimy co cztery bity. Wynik to 1 0110 1101. Jak widać liczba 1 jest sama, jest jeden bit. Aby było czytelniej, czyli jak zostało wspomina 4 bity można dodać na początku pozostałe trzy. Będzie więc 0001 0110 1101. Korzystając z tablicy wypisujemy wynik tj, 16D<br><p>
<p> <h1>III - FUNKCJA  scanf();</h1><hr><p>
 TABELA
<p>Typ   -   Format <br>
char   -    %c <br>
short   -    %hd<br>
int   -    %d or %i - liczba całkowta dziesiętna<br>
long   -    %ld  <br>
long   -    long %lld <br>
float   -    %f or %e - liczba zmiennopozycyjna<br>
double   -    %lf or %le<br>
long double   -    %Lf or %Le<br>
string   -    %s - ciąg znaków<br><p>
Fynkcja scanf(); - korzysta z biblioteki stdio.h (stanardowa we/wy) i stdin.h (standardowy strumień wejścia). Można ją poprostu nazwać "Wprowadzanie danych z klawiatury kompytera".<p>
Składa się z ("tekstu_sterującego" , adres_1 , adres_2 , . . . ). 
<p>Tekst sterujący zapisywany jest w cudzysłowiach np: "%d", i odpowiada danym podanym w funkcji printf(); <br>np: printf("Podaj liczbę całkowitą",zmienna, zmienna);<br>wiadomo, że użyjemy dla liczby całkowitej %d.
 Zmienną w tym przypadku można podać <br>np: int x; , a kolejną <br>  np: double y; , a więc mamy pełen zapis<br>int x;<br>
double y;<br>
printf( ”Podaj jedna liczbe calkowita: ” );<br>
scanf ( ”%d” , &x );<br>
printf( ”Podaj jedna liczbe rzeczywista i jeden znak: ”);<br>
scanf ( ”%lf %c” , &y);<br>
 gdzie : & to operator adresowania. Zwraca adres zmiennej podanej po operatorze. 
<p> <h1>IV - Liczby Fibonacciego;</h1><hr><p>
  <p>Ciąg Fibonacciego to ciąg liczb, w którym pierwszy wyraz jest równy 0, drugi jest równy 1 a każdy następny jest sumą dwóch poprzednich.<p><br>
    / F0=0<br>/ F1=1<br>/ Fn=(F n-1) + (F n-2) <br>
    <p>#include <stdio.h> <br>
<br>
long fib(int n) <br>
{ <br>
if ((n==0)||(n==1)) <br>
return 1; <br>
else <br>
return (fib(n-1) + fib(n-2)); <br>
} <br>
<br>
int main() <br>
{ <br>
int n;<br> 
printf("Podaj numer wyrazu ciagu Fibonacciego"); <br>
scanf("%d", &n); <br>
long b = fib( n ); <br>
printf("N-ty wyraz ciagu Fibonacciego wynosi %lf",b); <br>
scanf("%d%", n); <br>
}<p>
