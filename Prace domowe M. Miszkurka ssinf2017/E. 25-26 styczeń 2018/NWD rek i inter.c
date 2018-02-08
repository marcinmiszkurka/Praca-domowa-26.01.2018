#include <stdio.h>


void info() {
	printf("***********************************\n");
	printf("*  WSPOL Szczytno ssinf2017 gr I  *\n");
	printf("***********************************\n\n");
	printf("Program licz\245cy najwy\276szy wsp\242lny dzielnik dw\242ch liczb ca\210kowitych\n");
}

//Rekurencyjnie
int NWD_rekurencyjnie(int a, int b){
   if(a!=b)
     return NWD_rekurencyjnie(a>b?a-b:a,b>a?b-a:b);
   return a;
}

//Iteracyjnie
int NWD_iteracyjnie(int a, int b){
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowuj¹ wynik NWD(a,b)
}

int main() {
	int a, b;	
    info();    
    printf("Podaj pierwsz\245 liczb\251: ");
    scanf("%i", &a);    
    printf("Podaj drug\245 liczb\251: ");
    scanf("%i", &b);
      
    //Rekurencyjnie
    printf("Rekurencyjnie\n");
    printf("NWD liczb %i, %i wynosi: %i\n", a, b, NWD_rekurencyjnie(a,b)); 
    
    //Iteracyjnie
    printf("Iteracyjnie\n");
    printf("NWD liczb %i, %i wynosi: %i\n", a, b, NWD_iteracyjnie(a,b)); 
       
    return 0;
}
