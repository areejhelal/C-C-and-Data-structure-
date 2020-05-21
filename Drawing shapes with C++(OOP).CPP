  #include<iostream.h>
  #include<stdlib.h>
  #include<conio.h>
  #include<math.h>
  #include<graphics.h>


  //shape
  class shape
  {
	private:
		int color;
	public:
		shape()
		{
			color = 0;
		}

		shape(int a)
		{
			color =a;
		}

		shape(shape&s)
		{
			color = s.color;
		}

		~shape()
		{
		}

		void set_color(int a)
		{
			color = a;
		}

		int get_color()
		{
			return color;
		}

  };


  //point
  class point:public shape
  {
	private:
		int x,y;

	public:
		point()
		{
			x=y=0;
			cout<<"\npoint constructor is called";
		}

		point(point & p)
		{
			x=p.x;
			y=p.y;
		}

		point(int a )
		{
			x=y=a;
			cout<<"\npoint constructor is called";
		}

		point(int a,int b )
		{
			x = a;
			y = b;
			cout<<"\npoint constructor is called";
		}

		~point()
		{
			cout<<"\npoint destructor";
		}

		void setx(int a)
		{
			x=a;
		}

		void sety(int a)
		{
			y=a;
		}

		int getx()
		{
			return x;
		}

		int gety()
		{
			return y;
		}

		void setxy(int a,int b)
		{
			x=a;
			y=b;
		}

		void print()
		{
			cout<<"\npoint data:"<<x<<","<<y;
		}
		};

   //line
  class linee:public shape
  {
	private:
		point start , end;

	public:
		linee():start(0),end(0,0)
		{
			start.setxy(0,0);
			end.setxy(0,0);
			cout<<"\nline constructor is called";
		}


		linee(point p1,point p2)
		{
			start=p1;
			end=p2;
			cout<<"\nline constructor is called";
		}


		linee(int x1,int y1,int x2,int y2):start(x1,y1),end(x2,y2)
		{
			start.setxy(x1,y1);
			end.setxy(x2,y2);
			cout<<"\nline constructor is called";
		}

		~linee()
		{
			cout<<"\nline destructor";
		}

		linee(linee & l)
		{
			start = l.start;
			end = l.end;
		}
		linee & operator=(linee&l)
		{
			this->start=l.start;
			this->end = l.end;
			return *this;
		}

		void setstart(int a,int b)
		{
			start.setxy(a,b);
		}

		void setend(int a,int b)
		{
			end.setxy(a,b);
		}

		void setstart(point p)
		{
			start=p;
		}

		void setend(point p)
		{
			end=p;
		}

		void print()
		{
			cout<<"\nline data:";
			start.getx();
			start.gety();
			end.getx();
			end.gety();
		}
		};

   //circle
  class circlee:public shape
  {
	private:
		point center;
		int rad;

	public:
		circlee():center(0,0),rad(0)
		{
			center.setxy(0,0);
			rad=0;
			cout<<"\ncircle constructor is called";
		}

		circlee(int x1,int y1,int r):center(x1,y1),rad(r)
		{
			center.setxy(x1,y1);
			rad=r;
			cout<<"\ncircle constructor is called";
		}

		circlee(point p,int r):center(p),rad(r)
		{
			center=p;
			rad=r;
			cout<<"\ncircle constructor is called";
		}

		~circlee()
		{
			cout<<"\ncircle destructor";
		}

		circlee(circlee & c)
		{
		center = c.center;
		rad = c.rad;
		}

		circlee & operator =(circlee & c)
		{
		this->center = c.center;
		this->rad = c.rad;
		return *this;
		}

		void setcenter(int x1,int y1)
		{
			center.setxy(x1,y1);
		}

		void setrad(int r)
		{
			rad=r;
		}

		void setcenter(point p)
		{
			center=p;
		}

		point getcenter()
		{
			return center;
		}

		int getrad()
		{
			return rad;
		}
		void print()
		{
			cout<<"\ncircle data:";
			cout<<"\nradius ="<<rad;
			center.print();
		}
		};


   //rect
  class rect:public shape
  {
	private:

		point ul , lr;

	public:
		rect():ul(0),lr(0,0)
		{
			ul.setxy(0,0);
			lr.setxy(0,0);
			cout<<"\nrect constructor is called";
		}

		rect(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2)
		{
			ul.setxy(x1,y1);
			lr.setxy(x2,y2);
			cout<<"\nrect constructor is called";
		}

		rect(point p1,point p2)
		{
			ul=p1;
			lr=p2;
			cout<<"\nrect constructor is called";
		}

		~rect()
		{
			cout<<"\nrect destructor";
		}

		rect(rect & r)
		{
			ul = r.ul;
			lr= r.lr;
		}

		rect & operator=(rect&r)
		{
			this->ul=r.ul;
			this->lr =r.lr;
			return *this;
		}

		void setul(int a,int b)
		{
			ul.setxy(a,b);
		}

		void setlr(int a,int b)
		{
			lr.setxy(a,b);
		}

		void setul(point& p)
		{
			ul=p;
		}

		void setlr(point& p)
		{
			lr=p;
		}

		void print()
		{
			cout<<"\nrect data:";
			ul.print();
			lr.print();
		}
		};
   //pic
  class pic
  {
	private:
		int NL,NC,NR;
		linee * lp;
		circlee * cp;
		rect * rp;

	public:
		pic()
		{
			NL=NC=NR=0;
			lp=NULL;
			cp=NULL;
			rp=NULL;
		}

		~pic()
		{
			delete[]lp;
			delete[]cp;
			delete[]rp;
		}

		pic(int a, int b,int c,linee*p1,circlee*p2,rect*p3)
		{
			NL=a;
			NC=b;
			NR=c;
			lp=p1;
			cp=p2;
			rp=p3;
		}

		void setLines(int l,linee*p)
		{
			NL=l;
			lp=p;
		}

		void setCircles(int c,circlee*p)
		{
			NC=c;
			cp=p;
		}

		void setRects(int r,rect*p)
		{
			NR=r;
			rp=p;
		}

		void paint()
		{
			for(int i=0;i<NL&&lp;i++)
				lp[i].print();
			for(i=0;i<NC&&cp;i++)
				cp[i].print();
			for(i=0;i<NR&&rp;i++)
				rp[i].print();
		}



  };
		int main()
		{
			clrscr();
			int gdriver = DETECT,gmode,errorCode;
			initgraph(&gdriver,&gmode,"c:\\YOGISOFT\\TC\\BIN\\BGI");
			errorCode = graphresult();
			if(errorCode != grOk)
			{
				cout<<"can not initialize graphics ";
			}
			else
			{
				pic mypic;
				circlee cArr[3]={circlee(50,50,2),circlee(200,100,1),circlee(420,50,12)};
				rect rArr[2]={rect(30,40,170,100),rect(420,50,500,300)};
				linee lArr[2]={linee(420,50,300,3),linee(40,500,400,5)};
				mypic.setCircles(3,cArr);
				mypic.setRects(2,rArr);
				mypic.setLines(2,lArr);
				mypic.paint();
				getch();
				closegraph();
			}
			getch();
			return 0;

		}
