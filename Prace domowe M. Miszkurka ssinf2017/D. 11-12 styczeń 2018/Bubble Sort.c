#include <stdio.h>
main()
{
int i,j,x;
int a[5]={5,2,3,4,1};
for(i=0;i<5;i++) {
	for(j=i+1;j<5;j++) {
		if(a[i]>a[j]) {
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			
	}
}
}
int k;
for(k=0;k<5;k++) {printf("%d	",a[k]);} printf("\n");
}