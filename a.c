#include <stdio.h>
#include <math.h>
int checkprime(int n);
int checkarm(int n);
int main(){
	int select,n,n1;
	int a,b,i,flag;
	printf("1.Display prime numbers between inervals using function.\n");
	printf("2.Check prime of Armstrong number using user-defined function.\n");
	printf("3.Check whether a number can be expressed as sum of two prime numbers.\n");
	printf("��ȣ�� ���ÿ�.:");
	scanf("%d",&n);
	while((n<1)||(n>3))
	{
		printf("�ٽô����ÿ�\n");
		printf("1.Display prime numbers between inervals using function.\n");
		printf("2.Check prime of Armstrong number using user-defined function.\n");
		printf("3.Check whether a number can be expressed as sum of two prime numbers.\n");
		printf("��ȣ�� ���ÿ�.:");
		scanf("%d",&n);
	}
	if(n==1){

	printf("�ΰ��� �Ҽ��Է�:");
	scanf_s("%d %d",&a,&b);
	printf("�� �Ҽ� %d�� %d������ �Ҽ�����:",a,b);
	for(i=a+1; i<b; ++i){
		flag=checkprime(i);
		if(flag==1)
			printf("% d",i);
	}
	}
	if(n==2){
		printf("������ �Է��Ͻÿ�:");
		scanf("%d",&n1);
		checkprime(n1);
		checkarm(n1);
	}
	if(n==3)
	{
		printf("������ �Է��ϼ���:");
		scanf("%d",&n1);
		for(i=2; i<=n1/2; ++i)
		{
			if(checkprime(i)==1)
			{
				if(checkprime(n-1)==1)
				{
					printf("%d=%d+%d\n",n,i,n-i);
					flag=1;
				}
			}
		}
	}
	if(flag==0)
	{
		printf("%d�� �ΰ��� �Ҽ��� ������ ǥ���� �� �����ϴ�.",n);
	}
return 0;
}
int checkprime(int n){
	int j,flag=1;
	for(j=2; j<=n/2; ++j){
		if(n%j==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
int n,flag;
printf("�Ҽ��Է�:");
scanf("%d",&n);
flag=checkprime(n);
if(flag==1)
	printf("%d�� �Ҽ��̴�\n",n);
else
	printf("%d�� �Ҽ����ƴϴ�\n",n);
flag=checkarm(n);
if(flag==1)
	printf("%d�� armstrong number�̴�.\n",n);
else 
	printf("%d�� armstrong number�� �ƴϴ�.\n",n);
return 0;
}
int checkarm(int number){
	int originalnumber,remainder,result=0,n=0,flag;
	originalnumber=number;
	while(originalnumber!=0)
	{
		originalnumber/=10;
		n++;

	}
	originalnumber=number;
	while(originalnumber!=0)
	{
		remainder=originalnumber%10;
		result+=pow(remainder,q);
		originalnumber/=10;
	}
	originalnumber=number;
	return flag; 
}