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
		stack(stack &s);
		stack(int size);
		~stack();
		int isFull();
		int isEmpty();
		int push(int data);
		int pop(int&data);
		static int getCount();
		friend void viewContent(stack s);
		int peak();
		int operator==(stack &s) ;
		stack  operator+(stack &s);
		stack operator=(stack &s);
};

stack :: stack()
{
	size = 10;
	tos = 0;
	stk = new int[size];
	counter++;
	cout<<"\n default constructor is called";
}


stack :: stack(stack &s)
{
	size = s.size;
	tos = s.tos;
	stk = new int[size];
	counter++;

	for(int i=0;i<s.size;i++)
	{
		stk[i] = s.stk[i];
	}
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

stack stack::operator+(stack &s)
{
	int i;
	stack temp(size+s.size);
	temp.tos=tos+s.tos;
	temp.stk= new int[temp.size];
	for(i =0;i<tos;i++)
		temp.stk[i]=stk[i];
	for(i=0;i<s.tos;i++)
		temp.stk[tos+i]=s.stk[i];
	return temp;
}

stack stack::operator=(stack &s)
{
	this->tos = s.tos;
	this->size =s.size;
	delete[]stk;
	stk=new int[size];
	for(int i=0;i<tos;i++)
		stk[i]=s.stk[i];
	return * this;

}

int stack :: operator==(stack &s)
{
	if(!(tos==s.tos && size == s.size))
		return 0;
	for(int i =0;i<tos;i++)
	{
		if(stk[i]!=s.stk[i])
			return 0;
	}
	return 1;
}



int main()
{
	clrscr();
	stack s1(7),s2(7),s3(7);
	s1.push(1);
	s1.push(3);
	s1.push(5);
	cout<<"\nS1 Content :\n";
	viewContent(s1);
	s2.push(10);
	s2.push(20);
	cout<<"\nS2 Content :\n";
	viewContent(s2);
	s1=s2;
		if(s1==s2)
	{
		cout<<"\nTRUE\n";
	}

	s3=s1+s2;
	cout<<"\nS1+S2 Content :\n";
	viewContent(s3);

	getch();
	return 0;
}

