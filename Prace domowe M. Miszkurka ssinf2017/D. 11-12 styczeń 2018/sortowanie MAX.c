#include <stdio.h>
#include <conio.h>

#define MIN(a,b) ( ( (a)<(b) )?(a):(b) )
#define MAX(a,b) ( ( (a)>(b) )?(a):(b) )

int main()
{
	const int liczba1 = 1000;
	const int liczba2 =2;
	
	printf("%d\n", MAX (liczba1, liczba2));
	
	return 0;
}

int policzWode(int *histogram){
	
	 
	int woda = 0;
	int l=0, p=N-1;
	int l_max=0, p_max=0;
	
	while (l<=p){
		if(histogram[l]<histogram[p])
			if(histogram[l]>l_max){
				l_max = histogram[l]; // zapamietaj nowe maximum
		}else{
			woda+=L_max - histogram[l];
					}
					l++}else{
						if (histogram[p]>p_max){
							p_max = histogram[p]; //zapamiêtaj nowe maximym
						}else{
							woda+=p_max - histogram[p];
						}
						p--
						}
						}
		return woda;
	}
	
