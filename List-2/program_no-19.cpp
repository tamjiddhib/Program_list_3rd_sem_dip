#include<iostream>
using namespace std;
int print(int &a,int &b);
int main()
{
	int a,b;
	
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	cout<<"Enter the value of a  : ";
	cin>>a;
	cout<<"Enter the value of b  : ";
	cin>>b;
	
	print(a,b);
	return 0;
}
int print(int &a, int &b)
{
	 cout<<"value a : "<<a+b;	
}
