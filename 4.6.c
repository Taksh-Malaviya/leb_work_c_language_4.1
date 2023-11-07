#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b;
	clrscr();
	printf("enter value of A");
	scanf("%d",&a);
	printf("enter value of B");
	scanf("%d",&b);
	
	
	a=a+b;

	b=a-b;
	
	a=a-b;
	printf("A=%d\n",a);
	printf("B=%d",b);
		
	getch();
	
}
