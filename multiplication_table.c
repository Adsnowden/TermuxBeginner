#include <stdio.h>
int main(){
	int a;
	int response;
	printf("::::::::::::::::::::\n");
	printf("::                ::\n");
	printf("::    DEADLOCK    ::\n");
	printf("::                ::\n");
	printf("::::::::::::::::::::\n");
	
	do
	{
		int data = 0;
		int count =1;
		int number;
		int result;
		printf("Please enter a number : ");
		scanf("%d",&number);
		while(count<=12)
		{
			result=number*count;
			printf("%d * %d = %d\n",number,count,result);
			count ++;
		}
		printf("Enter 1 to do again or anykey to break : ");
		scanf("%d",&response);
	}while(response == 1);
	return 0;
	}
