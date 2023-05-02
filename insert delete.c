#include<stdio.h>
int main(){
	int a[3],i,n;
	printf("array before insertion:\n");
	for(i=0;i<13;i++)
		printf("a[%d] = %d \n",i,a[i]);
		printf("inserting elements.........");
		printf("array elements after inserton /n");
		for(i=0;i<3;i++){
			a[i]=i+2;
			printf("a[%d] = %d \n" ,i ,a[i]);
			
	}
	for(i=0;i<3;i++)
	printf("a[%d] = %d \n" ,i ,a[i]);
	for(i=1;i<3;i++){
		a[i]=a[i+1];
		n=n-1;
	}
	printf("the array elements after deletion : \n");
	for (i=0;i<n-1;i++)
	printf("a[%d]=%d \n",i,a[i]);
	return 0;
}
