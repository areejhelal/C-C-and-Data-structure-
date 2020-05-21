  #include<stdio.h>
  #include<conio.h>
  void highlight(int );

  int i=0,j=0,k=0,flag=0;
  int pos=0,col=35,row=10,terminate=0;
  char key;
  int id;
  char menuLinked[6][10]={"Add","Insert","Delete","Search","Display","Exit"};

  struct Node * start;
  struct Node * end;

 //sruct node
  struct Node
  {
	int id;
	char name[51];
	char address[101];
	struct Node * prev;
	struct Node * next;
  };

  struct Node*ele ;

  //struct 	linked list
  struct linkedlist
  {
	struct Node * start;
	struct Node * end;
  };

  struct linkedlist* l;

  //create node
  struct Node*createnode(void)
  {
   return (struct Node *)malloc(sizeof(struct Node));
  }


  //Append
  int appendnode(struct linkedlist*l , struct Node*ele)
  {
	createnode();
	printf("\nEnter name:");
	scanf("%s",(ele->name));
	printf("\nEnter id:");
	scanf("%d",&(ele->id) );
	if(l->start == NULL)
	{
		l->start = ele;
		l->end =ele;
		ele->prev = ele->next = NULL;
	}
	else
	{
		l->end->next = ele;
		ele->prev = l->end;
		l->end = ele;
		ele->next = NULL;
	}
	return 1;
  }

  //no of elements
  int getnoofelements(struct linkedlist l)
  {
	int n=0;
	struct Node * temp;
	temp = l.start;
	while(temp)
	{
		n++;
		temp = temp->next;
	}
	return n;
  }

  //searching
  struct Node * searchnode(struct linkedlist l , int id)
  {
	struct Node * temp;
	temp = l.start;
	while(temp && temp->id != id)
	{
		temp = temp -> next;
	}
	return temp;
  }

  //deleting
  int deletenode(struct linkedlist * l,int id)
  {
	struct Node * temp;
	temp = searchnode(*l,id);
	if(!temp)
	{
		return 0;
	}
	else if(temp == l->start && l->start == l->end)
	{
		l->start = l->end = NULL;
	}
	else if(temp == l->end)
	{
		l->end = l->end->prev;
		l->end->next = NULL;
	}
	else if(temp == l->start)
	{
		l->start = temp->next;
		l->start->prev= NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return 1;
  }

  //freelist
  void freelist(struct linkedlist * l)
  {
	struct Node*temp = l->start;
	while(l->start)
	{
		l->start = l->start->next;
		free(temp);
		temp = l->start;
	}
	l->start = l->end;
  }

  //main
  void main(void)
  {
	struct linkedlist list;
	list.start = list.end=NULL;

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
				if(pos>5)
				pos = 0;
				highlight(pos);
				break;

				case 72:
				pos--;
				highlight(pos);
				if(pos<0)
				pos = 5;
				highlight(pos);
				break;


			}
		case 13 :
		switch(pos)
		{
			case 0:
			highlight(pos);
			key =getch();
			if(key==13)
			{
				clrscr();
				appendnode(l,ele);

				getch();

			}
			break;

			case 1:
			highlight(pos);
			key =getch();
			if(key==13)
			{
				clrscr();

			  getch();
			}
			break;

			case 2:
			highlight(pos);
			key =getch();
			if(key==13)
			{
				clrscr();
				getch();
			}
			break;

			case 3:
			highlight(pos);
			key =getch();
			if(key==13)
			{
				clrscr();
				getch();
			}
			break;

			case 4:
			highlight(pos);
			key =getch();
			if(key==13)
			{
					clrscr();
					printf("%s",(ele->name));
					printf("\n%d",ele->id);

			   getch();
			}
			break;

			case 5:
			highlight(pos);
			key =getch();
			if(key==13)
			{
				terminate =1;
			   //	getch();
			}
			break;
		}
	}
	}while(terminate ==0) ;
  getch();
  }

 //highlight
  void highlight(int pos)
  {
	for(i=0;i<6;i++)
	{
		gotoxy(col,row+(2*i));
		if(i==pos)
			textattr(0x70);
			cprintf("%s",menuLinked[i]);
			textattr(0x07);
	}
  }