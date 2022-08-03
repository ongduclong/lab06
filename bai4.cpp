#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	int i, a,b, arr[20];
	srand((unsigned)time(NULL));
	printf("20 phan tu cua mang : ");
	for(i=0;i<20;i++)
	{
		arr[i]=rand();
	printf("\t%d",arr[i]);
	}
	printf("\nNhap so: ");
	scanf("%d", &a);
	for(i=0;i<20;i++){
		if(arr[i]==a){
			b=0;
		}
		else{
			b=1;
		}
	}
	if(b==0){
		printf("%d thuoc mang",a);
	}
	if(b==1){
		printf("%d khong thuoc mang",a);
	}
	return 0;
}


