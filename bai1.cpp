#include <stdio.h>

int main()
{
	int arr[10];
	printf("Nhap 10 phan tu cua mang : \n");
	for( int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Cac phan tu o vi tri chan : ");
	for(int i=0;i<10;i+=2){
			printf("%d ",arr[i]);
		}
	return 0;
}


