#include<iostream>
using namespace std;
int fact(int );

int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int n;
	
	cout<<"Enter the number :: ";
	cin>>n;
	
	fact(n);
	
	return 0;
}
int fact(int n)
{
	int i,f=1;
	if(n<0)
	{
		cout<<"factorial of this number doesn't exisits.";
	}
	for(i=1;i<=n;i++)
	{
		f = f*i;
	}
		cout<<"This is factorial of a given number :: "<<f;
}
