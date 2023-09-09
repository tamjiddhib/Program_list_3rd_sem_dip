#include<iostream>
using namespace std;
int power(int b, int p);
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;
	
	int b,p;

	cout<<"Enter the base : ";
	cin>>b;

	cout<<"Enter the power : ";
	cin>>p;
	
	power(b,p);
	return 0;
}
int power(int b,int p)
{
	int i,res=1;
	for(i=1;i<=p;i++)
	{
		res*=b;
	}
	cout<<res;
}
