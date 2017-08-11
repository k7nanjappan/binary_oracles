#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
void main()
{
 int i,sel[3],date;
 char *name,*add;
 main:
 clrscr();
 cout<<"\n";
 for(i=0;i<80;i++)
 {
  cout<<"-";
 }
 cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
 for(i=0;i<80;i++)
 {
  cout<<"-";
 }
 cout<<"\n\n\n Welcome to RBC\n\n";
 cout<<"\n 1. Request Blood";
 cout<<"\n 2. Donate  Blood";
 cout<<"\n 3. Exit";
 cout<<"\n\n\n\n Enter your Selection: ";
 cin>>sel[0];
 switch(sel[0])
 {
  case 1: req:
	  clrscr();
	  cout<<"\n";
	  for(i=0;i<80;i++)
	  {
	   cout<<"-";
	  }
	  cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	  for(i=0;i<80;i++)
	  {
	   cout<<"-";
	  }
	  cout<<"\n\n";
	  cout<<"\n Enter Name        : ";
	  gets(name);
	  cout<<"\n Enter Locality    : ";
	  gets(add);
	  cout<<"\n Enter Phone Number: ";
	  cout<<"\n Types of Urgency: ";
	  cout<<"\n 1. Emergency : Blood required immedeately within hours";
	  cout<<"\n 2. Immediate : Blood required within a day";
	  cout<<"\n 3. Moderate  : Blood required in a certain period of time";
	  cout<<"\n\n Enter selection: ";
	  cin>>sel[1];
	       if(sel[1]==1||sel[1]==2)
	       {
		   clrscr();
		   for(i=0;i<80;i++)
		   {
		    cout<<"-";
		   }
		   cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
		   for(i=0;i<80;i++)
		   {
		    cout<<"-";
		   }
		   cout<<"\n\n Blood has been requested!";
		   getch();
		   goto beg;
	       }
		else if(sel[1]==3)
		{
		 clrscr();
		 cout"\n";
		 for(i=0;i<80;i++);
		 cout<<"-";
		 cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
		 for(i=0;i<80;i++);
		 cout<<"-";
		 cout<<"\n Enter date by which blood is required(ddmmyy): ";
		 cin>>date;
		 cout<<"\n Thank You! Your blood request has been placed";
		 goto main;
		}
		else
		{
		 clrscr();
		 cout<<"\n";
		 for(i=0;i<80;i++)
		 cout<<"-";
		 cout<<"\n\t\t\t  Request Blood at Convenience";
		 for(i=0;i<80;i++)
		 cout<<"-";
		 cout<<"\n\n Wrong Selection!";
		 getch();
		 goto req;
		}
		break;

 getch();
}