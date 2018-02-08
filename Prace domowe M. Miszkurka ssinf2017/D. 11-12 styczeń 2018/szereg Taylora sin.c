szereg_Taylora_sin


#include <stdio.h>
//liczy czêstotliwoœæ wystêpowania litery w tablicy
int main() {
    const char ciag_zn []="Ala ma kota ";
    //printf("%s\n", ciag_zn);
   int histogram [26]={0};
    char znak;
    int licznik=0;

    while( (znak=ciag_zn[licznik]) !=0) //
    {
        if ((znak>= 'a') &&(znak<='z'))
        {
            ++histogram[znak-'a']; //zlicz
        }
        ++licznik;
    }
    /* alternatywna petla for zamiast while
     * for(int x=0; ciag_zn[licznik] !=0; ++licznik)*/
    for(int x=0; x<26; ++x)
    {
        printf("%c -> %d,\n", 'a' + x, histogram[x]);
    }
    return 0;
}
