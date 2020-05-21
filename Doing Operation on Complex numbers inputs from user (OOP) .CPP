  #include<iostream.h>
  #include<stdlib.h>
  #include<conio.h>
  #include<math.h>
  class complex
  {
	private:
		float real , image;

	public:
		 complex();


		 complex(float r , float i);


		 ~complex() ;


		void  setReal(float r) ;


		float  getReal() ;


		void  setImage(float i);


		float getImage() ;


		void  print()  ;

		int operator == (complex & c);

		complex & operator = (complex &c);

		complex operator + (complex &c);

		complex  operator + (float f);

		friend complex operator+(float f , complex &c);

		complex & operator++ ();

		complex operator++(int data);

		operator float();

		friend istream & operator>> (istream & in , complex &c);

		friend ostream  & operator << (ostream & out , complex & c);
  };

  int main()
  {
	clrscr();
	float r1,r2,i1,i2 ;
	complex c1,c2,c3,c4;
	cout<<"Please enter r1: ";
	cin>>r1;
	cout<<"Please enter i1: ";
	cin>>i1;
	c1.setReal(r1);
	c1.setImage(i1);
	cout<<"\nc1: ";
	c1.print();
	c3 = c1++;
	cout<<"\nc1++: ";
	c3.print();
	c3=++c1;
	cout<<"\n++c1: ";
	c3.print();

	cout<<"Please enter r2: ";
	cin>>r2;
	cout<<"Please enter i2: ";
	cin>>i2;
	c2.setReal(r2);
	c2.setImage(i2);
	c2.print();
	 float f;
	 f=float(c2);
   cout<<f;
	cin>>c4;
	cout<<c4;
	getch();
	return 0;
  }

		void complex :: complex()
		{
			real = 0 ;
			image = 0;
		}

		void complex :: complex(float r , float i)
		{
			real = r;
			image = i;
		}

		void complex :: ~complex()
		{
			cout<<"Destructor !! " ;
		}

		void complex :: setReal(float r)
		{
			real = r;
		}

		float complex :: getReal()
		{
			return real;
		}

		void complex :: setImage(float i)
		{
			image = i;
		}

		float complex :: getImage()
		{
			return image;
		}


		void complex :: print()
		{
			if(image==0)
			{
				cout<<"\ncomplex=" <<real<<"\n";
			}
			else if (real ==0)
			{
				cout<<"\ncomplex="<<"i"<<image<<"\n";
			}
			else
			{
				cout<<"\ncomplex=" <<real<<"+i"<<image<<"\n";
			}

		}

		int complex :: operator==(complex&c)
		{
			return (real == c.real && image == c.image);
		}

		complex & complex :: operator=(complex&c)
		{
			real = c.real ;
			image = c.image;
			return(*this);
		}

		complex complex:: operator+ (float f)
		{
			complex temp (real + f,image);
			return temp;


		}

		complex operator+ (float f , complex & c)
		{
			complex temp ;
			temp.real = f+c.real;
			temp.image = c.image;
			return temp;

		}

		complex & complex :: operator++ ()
		{
			real++;
			image++;
			return * this;
		}

		complex complex :: operator++(int data)
		{
			complex temp(*this);
			real++;
			image++;
			return temp;
		}

		complex :: operator float()
		{
			return sqrt(real*real + image*image);
		}

		 istream & operator>> (istream & in , complex &c)
		 {
			cout<<"\nEnter data of complex :";
			in>>c.real;
			in>>c.image;
			cout<<"\nDone";
			return in;
		 }

		 ostream  & operator << (ostream & out , complex & c)
		 {
			out<<"\nthe value of complex :";
			out<<c.real<<"+i"<<c.image;
		 }