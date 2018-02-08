#include <stdio.h>
main()
{
int i,j,key;
int a[5]={5,2,3,4,1};
for(i=1;i<5;i++)
{
	key=a[i];
	while(i>0 && a[i-1]>key) {
		j=a[i];
		a[i]=a[i-1];
	   a[i-1]=j;
	   --i;
	}	
}
int k;
for(k=0;k<5;k++)
{printf("%d	", a[k]);}
printf("\n");
	}