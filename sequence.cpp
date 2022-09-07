#include<stdio.h>
int main(){
	int num;
	int i;
	int sequence[100];
	int sum = 0.0;
	float avg;
	
	printf("Enter the number of number in the sequence :\n");
	scanf("%d",&num);
	
	while (num < 0 || sequence[num] < 0)
	{
		printf("No positive numbers!\n");
	}
	
	printf("Enter the sequence:\n");
	for (i=0;i < num;i++);
	{
		scanf("%d",&sequence[i]);
		sum +=sequence[i];
	}
	avg =(float) sum/num;
	printf("Average is %.2f\n", avg);
	
	return 0;
}
