#include<stdio.h>
#include<conio.h>
void main(){
	
	int a=0,b=2,c;
	clrscr();
	printf("enter value of A ");
	scanf("%d",&a);
	printf("enter value of B ");
	scanf("%d",&b);
	
	c=a;
	
	a=b;
	
	b=c;
		
	printf("a=%d\n",a);
	printf("b=%d",b);

	getch();
	
}
