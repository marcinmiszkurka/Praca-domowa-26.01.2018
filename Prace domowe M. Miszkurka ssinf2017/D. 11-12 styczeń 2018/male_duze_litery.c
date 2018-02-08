#include <stdio.h>
#include <ctype.h>
#define tekst 33
int m;               // Zmienna globalna przechowujaca male litery
int d;              // Zmienna globalna przechowujaca duze litery
const char tab[tekst] = "LORem ipSUm dOloR sIt aMeT eNiM.\n";
void info(void)

void wyswietl_tablice (void)
{
    printf("%s", tab);
}
void male ()
{
    for (int i = 0; i < tekst; ++i)
    {
        if (islower(tab[i]))
        {
            m+= 1;
        }
    }
    printf("%i ma\210ych liter\n",m );
}
void duze ()
{
    for (int i= 0; i <tekst; ++i)
    {
        if (isupper (tab[i]))
        {
            d+= 1;
        }
    }
    printf("%i du\253ych liter\n",d );
}
int main ()
{
    info();
    wyswietl_tablice();
    printf("\nTekst zawiera:\n");
    male();
    duze();
    return 0;
