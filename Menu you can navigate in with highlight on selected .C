#include<stdio.h>
#include<conio.h>
void highlight(int );

void name(void);
void id(void);
int i ;
int pos=0,col=35,row=10,terminate=0;
char key;
char menuEmployee[4][10]={"Name","ID","Display","Exit"};
static struct menu
{
char name[10];
int id;
};
struct menu m[3];
void display(struct menu m[3]);
void main (void)
{
do
{

clrscr();
  highlight(pos);

flushall();
key=getch();
switch(key)
{
case NULL :
key = getch();
switch(key)
{
case 80:
pos++;
  highlight(pos);
if(pos>3)
pos = 0;
 highlight(pos);
break;

case 72:
pos--;
 highlight(pos);
if(pos<0)
pos = 3;
 highlight(pos);
break;

case 8:
pos=0;
 highlight(pos);
break;

case 27:
pos =3;
 highlight(pos);
break;
}
case 13 :
switch(pos)
{
case 0:
 highlight(pos);
 key =getch();
 if(key==13){
clrscr();
for(i=0;i<3;i++){
//printf("\nEnter name:");
//gets(m[i].name);
 name();
 getch();
}
}
break;

case 1:
 highlight(pos);
 key =getch();
 if(key==13){
clrscr();
for(i=0;i<3;i++){
id();
//printf("\nEnter ID:");
//scanf("%d",&m[i].id);
getch();
}}
break;

case 2:
 highlight(pos);
 key =getch();
 if(key==13){
display(m);
getch();
}
break;

case 3:
 highlight(pos);
 key =getch();
 if(key==13){
terminate =1;
getch();
}
break;
}
}
}while(terminate ==0) ;
getch();
}
 void highlight(int pos)
{
for(i=0;i<4;i++){
gotoxy(col,row+(2*i));
if(i==pos)
textattr(0x70);
cprintf("%s",menuEmployee[i]);
textattr(0x07);
}
}
void name(void){
  printf("\nEnter name:");
	gets(m[i].name);
}
void id(void){
printf("\nEnter ID:");
scanf("%d",&m[i].id);
}

void display( struct menu m[3] ){
	for(i=0;i<3;i++){
   printf("\nname %s:",m[i].name);
   printf("\tid: %d",m[i].id);
   }
}
