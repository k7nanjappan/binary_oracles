#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>
void main()
{
 int i,sel[2],date,age,weight,type,flag,flag2,phone;
 char *name,*add,*btype;
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
  case 1: flag2=0;
	  clrscr();
	  cout<<"\n";
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\n";
	  cout<<"\n Enter Name        : ";
	  gets(name);
	  cout<<"\n Enter Locality    : ";
	  gets(add);
	  cout<<"\n Enter Phone Number: ";
	  cin>>phone;
	  req:
	  if(flag2==0)
	  {
	   cout<<"\n Types of Urgency\n ";
	   cout<<"\n 1. Emergency : Blood required immedeately within hours";
	   cout<<"\n 2. Immediate : Blood required within a day";
	   cout<<"\n 3. Moderate  : Blood required within a certain period of time";
	   cout<<"\n\n Enter selection: ";
	   cin>>sel[1];
	   flag2=0;
	  }
	  else if(flag2==1)
	  {
	   clrscr();
	   cout<<endl;
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n\n Enter Urgency again";
	   cout<<"\n\n Types of Urgency\n";
	   cout<<"\n 1. Emergency: Blood required immedeately within hours";
	   cout<<"\n 2. Immediate: Blood required within a day";
	   cout<<"\n 3. Moderate : Blood required within a certain period of time";
	   cout<<"\n\n Enter Selection: ";
	   cin>>sel[1];

	  }
	       if(sel[1]==1||sel[1]==2)
		{
		   clrscr();
		   cout<<endl;
		   for(i=0;i<80;i++)
		   cout<<"-";
		   cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
		   for(i=0;i<80;i++)
		   cout<<"-";
		   cout<<"\n\n Blood has been requested!";
		   getch();
		   goto main;
		}
		else if(sel[1]==3)
		{
		 clrscr();
		 cout<<"\n";
		 for(i=0;i<80;i++)
		 {cout<<"-";}
		 cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
		 for(i=0;i<80;i++)
		 {cout<<"-";}
		 cout<<"\n\n Enter date by which blood is required(ddmmyy): ";
		 cin>>date;
		 cout<<"\n Thank You! Your blood request has been placed";
		 getch();
		 goto main;
		}
		else
		{
		 flag2=1;
		 clrscr();
		 cout<<"\n";
		 for(i=0;i<80;i++)
		 {cout<<"-";}
		 cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
		 for(i=0;i<80;i++)
		 cout<<"-";
		 cout<<"\n\n Wrong Selection!";
		 getch();
		 goto req;
		}


  case 2: flag=0;
	  clrscr();
	  cout<<"\n";
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\n Become our Donor!\n";
	  cout<<"\n Enter name: ";
	  gets(name);
	  cout<<"\n Enter locality: ";
	  gets(add);
	  cout<<"\n Enter Age: ";
	  cin>>age;
	  cout<<"\n Enter Weight: ";
	  cin>>weight;
	  type:
	  if(flag==0)
	  {
	   cout<<"\n Blood Types \n";
	   cout<<"\n 1. O+ve";
	   cout<<"\n 2. O-ve";
	   cout<<"\n 3. A+ve";
	   cout<<"\n 4. A-ve";
	   cout<<"\n 5. B+ve";
	   cout<<"\n 6. B-ve";
	   cout<<"\n 7. AB+ve";
	   cout<<"\n 8. AB-ve";
	   cout<<"\n Enter Type: ";
	   cin>>type;
	   flag=0;
	  }
	  else if(flag==1)
	  {
	   clrscr();
	   cout<<"\n";
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n Enter Blood type again";
	   cout<<"\n\n Blood Types\n";
	   cout<<"\n 1. O+ve";
	   cout<<"\n 2. O-ve";
	   cout<<"\n 3. A+ve";
	   cout<<"\n 4. A-ve";
	   cout<<"\n 5. B+ve";
	   cout<<"\n 6. B-ve";
	   cout<<"\n 7. AB+ve";
	   cout<<"\n 8. AB-ve";
	   cout<<"\n Enter Type: ";
	   cin>>type;
	  }
	  switch(type)
	  {
	   case 1: strcpy(btype,"O+ve");
		   break;
	   case 2: strcpy(btype,"O-ve");
		   break;
	   case 3: strcpy(btype,"A+ve");
		   break;
	   case 4: strcpy(btype,"A-ve");
		   break;
	   case 5: strcpy(btype,"B+ve");
		   break;
	   case 6: strcpy(btype,"B-ve");
		   break;
	   case 7: strcpy(btype,"AB+ve");
		   break;
	   case 8: strcpy(btype,"AB-ve");
		   break;
	   default: cout<<"\n Select correct type of Blood Group!";
		    flag=1;
		    getch();
		    goto type;

	  };
	  clrscr();
	  cout<<endl;
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\t\t\t Donate Blood at Convenience\n\n";
	  for(i=0;i<80;i++)
	  cout<<"-";
	  cout<<"\n\n Thank you for joining RBC as a Donor";
	  delay(300);
	  cout<<"\n\n Your interest in blood donation is highly appreciated";
	  delay(300);
	  cout<<"\n\n When someone requires blood you will be notified";
	  delay(300);
	  cout<<"\n\n ** Press Enter to Continue **";
	  getch();
	  break;
  case 3: exit(0);
	  break;
  default: clrscr();
	   cout<<endl;
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n\t\t\t  Request Blood at Convenience\n\n";
	   for(i=0;i<80;i++)
	   cout<<"-";
	   cout<<"\n\n Wrong selection!";
	   getch();
	   goto main;

 };
}