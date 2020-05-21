#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

class stack
{
	private :
		int*stk;
		int size;
		int tos;
		static int counter;

	public :
		stack();
		stack(int size);
		~stack();
		int stack :: isFull();
		int stack :: isEmpty();
		int push(int data);
		int pop(int&data);
		static int stack :: getCount();
		friend void viewContent(stack s);
		int stack :: peak();
};

stack :: stack()
{
	size = 10;
	tos = 0;
	stk = new int[size];
	counter++;
	cout<<"\n default constructor is called";
}

stack :: stack(int size)
{
	this->size = size;
	tos = 0;
	stk = new int[size];
	counter++;
	cout<<"\n 1 parameter constructor";
}

stack :: ~stack()
{
	delete[]stk;
	counter--;
}
int stack :: isFull()
{
	return tos == size ;
}

int stack :: isEmpty()
{
	return !tos;
}

int stack :: push(int data)
{
	if(!isFull())
	{
		stk[tos]=data;
		tos++;
		return 1;
	}
	return 0;
}

int stack :: pop(int & out)
{
	if(!isEmpty())
	{
		tos--;
		out = stk[tos];
		return 1;
	}
	return 0;
}

int stack :: getCount()
{
	return counter;
}

int stack :: counter=0;

 void viewContent(stack s)
{
	int i;
	for(i=0;i<s.tos;i++)
	{
		cout<<"\n"<<s.stk[i];
	}
}

 int stack :: peak()
{
	return stk[tos-1];
}

int main()
{
	clrscr();
	stack s1(7);
	s1.push(30);
	s1.push(555);
	s1.push(-333);
	cout<<"\ncount:" ;
	cout<<"\n"<<stack::getCount();
	cout<<"\npeak:" ;
	int y =s1.peak();
	cout<<"\n"<<y;
	int x;
	s1.pop(x);
	cout<<"\npop element 1:" ;
	cout<<"\n"<<x ;
	s1.pop(x);
	cout<<"\npop element 2:" ;
	cout<<"\n"<<x ;
	s1.pop(x);
	cout<<"\npop element 3:" ;
	cout<<"\n"<<x ;
	stack s2;
	s2.push(25);
	cout<<"\nview content:" ;
	viewContent(s2);
	s1.pop(x);
	cout<<x<<endl;
	viewContent(s1);
	getch();
	return 0;
}