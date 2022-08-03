#include <stdio.h>

int main()
{
	int arr[10],k, i;
	printf("Nhap cac gia tri cua mang :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0], min=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}	
	}
	int count_Max=0, count_Min=0;
	for(i=0;i<10;i++)
	{
		if(arr[i]== max)
		{
			count_Max++;
		}
		if(arr[i]==min){
			count_Min++;
		}
	}
	printf("max = %d",max);
	printf(" so lan xuat hien la %d\n",count_Max);
	printf("min = %d",min);
	printf(" so lan xuat hien la %d",count_Min);
	int sum = 0;
	float Tb;
	for(i=0;i<10;i++){
		sum=sum+arr[i];
		Tb=(float)sum/10;
	}
	printf("\nTong cac phan tu = %d",sum);
	printf("\nTrung binh cac phan tu = %.2f",Tb);
	return 0;
}


