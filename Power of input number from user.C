#include<stdio.h>
#include<conio.h>
int power(int n,int p);
void main(void)
{
int n,p,result;
clrscr();
printf("Enter number:");
scanf("%d",&n);
printf("Enter power:");
scanf("%d",&p);
power(n,p);
result =power(n,p);
printf("\nResult is= %d",result );
getch();
}

int power(int n,int p){

if(p!=0)
return n*power(n,p-1);

else
 return 1 ;

}