#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class books
{
 char title[30];
 int cost;
 char ISBN[15];
 public:
 void input()
 {
  cout<<"\nEnter the title of the book:";
  gets(title);
  cout<<"\nEnter the cost of the book:";
  cin>>cost;
  cout<<"\nEnter the ISBN of the books:";
  cin>>ISBN;
 }
 void output()
 {
  cout<<"\nTITLE:"<<title<<"\nCOST:"<<cost<<"\nISBN:"<<ISBN;
 }
};
 int main()
 {
  books b[10];
  cout<<"\nENTRY FORM...\n\n";
  for( int i=0;i<1;i++)
  {
   cout<<"\n................Enter the data of the book.............. "<<i+1<<"\n";
   b[i].input();
  }
  cout<<"\nBOOK DETAILS......\n\n";
for(i=0;i<1;i++)
  {
   cout<<"\ndata of the book "<<i+1<<"\n";
   b[i].output();
  }
  getch();
  return 0;
 }


