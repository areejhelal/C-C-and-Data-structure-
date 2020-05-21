 #define N 3
 #include<stdio.h>
 #include<conio.h>
 void main(void)
 {
 int i,col,row=0;
 col = N/2;
 gotoxy (col+1,row+1);
 printf("1");
 for(i=1;i< N*N;i++)
 {
 if(i%N)
 {
 row--;
 if(row<0)
 row = N-1;
 col--;
 if(col<0)
 col=N-1;
 }
 else
 {
 row++;
 if(row>N-1)
 row=0;
 }
 gotoxy(col+1,row+1);
 printf("%d",i+1);
 }
 getch();
 }