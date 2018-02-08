szereg_Taylora_sin

#include <stdio.h>
                //liczy częstotliwość występowania litery w tablicy
int main() {
    const char ciag_zn []="Ala ma kota ";
    int histogram [26]={0};
    char znak;
    int licznik=0;

    while( (znak=ciag_zn[licznik]) !=0) 
    {
        if ((znak>= 'a') &&(znak<='z'))
        {
            ++histogram[znak-'a']; //zlicz
        }
        ++licznik;
    }
    for(int x=0; x<26; ++x)
    {
        printf("%c -> %d,\n", 'a' + x, histogram[x]);
    }
    return 0;
}
