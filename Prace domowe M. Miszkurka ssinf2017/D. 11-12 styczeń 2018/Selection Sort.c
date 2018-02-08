#include <stdio.h>
main()
{
int i,j,x,min,k;
int a[5]={5,3,2,4,1};
for(i=0;i<5;i++) {
	min=i;
	for(j=i+1;j<5;j++) {
		if(a[min]>a[j]) {
			min=j;
	}
	x=a[min];
	a[min]=a[j];
	a[j]=x;
}	}
for(k=0;k<5;k++) {printf("%d ",a[k]);}
	printf("\n");
}