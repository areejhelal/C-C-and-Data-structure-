  #include<iostream.h>
  #include<stdlib.h>
  #include<conio.h>
  #include<math.h>


class geoshape
{
	protected :
		float dim1,dim2;

	public:
		geoshape()
		{
			dim1=dim2=0;
		}

		geoshape(float f1,float f2)
		{
			dim1=f1;
			dim2=f2;
		}

		~geoshape()
		{

		}

		void setDim1(float f)
		{
			dim1=f;
		}

		void setDim2(float f)
		{
			dim2=f;
		}

		float getDim1()
		{
			return dim1;
		}

		float getDim2()
		{
			return dim2;
		}

		float calcArea()
		{
			return 0;
		}

};

class rect:public geoshape
{
	public :
		rect():geoshape(0,0)
		{

		}

		rect (float w,float h):geoshape(w,h)
		{
			dim1=w;
			dim2=h;
		}

		~rect()
		{

		}

		float calcArea()
		{
			return dim1*dim2;
		}
};

class square : public rect
{
	public :
		square() :rect(0,0)
		{

		}

		square(float f):rect(f,f)
		{
			dim1=dim2=f;
		}
		float calcArea()
		{
			return dim1*dim2;
		}
};

class circle:public geoshape
{
	public :
		circle():geoshape(0,0)
		{}

		circle(float r):geoshape(r,r)
		{
		}

		~circle()
		{}

		float calcArea()
		{
			return 3.14*dim1*dim2;
		}

		void setDim(float f)
		{
			dim1=dim2=f;
		}
};

int main()
{
	clrscr();

	rect r(5,4);
	circle c (20);
	square s(5);

	cout<<"\n"<<r.calcArea();
	cout<<"\n"<<c.calcArea();
	cout<<"\n"<<s.calcArea();
	getch();
	return 0;
}