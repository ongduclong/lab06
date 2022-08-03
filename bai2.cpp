#include<stdio.h>
int main()
{
	int i, intArr[5];
	float floatArr[10];
	printf("Nhap vao cac phan tu : \n");
	for(i=0;i<5;i++){
		scanf("%d",&intArr[i]);
	}
	for(i=0;i<10;i++){
		if(i<5){
			floatArr[i]=intArr[i];
		}
		else{
			floatArr[i]=0;
		}
	}
	printf("Cac phan tu mang intArr la: ");
	for(i=0;i<5;i++){
		printf("%d ",intArr[i]);
	}
	printf("\nCac phan tu mang floatArr la: ");
	for(i=0;i<10;i++){
		printf("%.2f ",floatArr[i]);
	}
	return 0;
}

