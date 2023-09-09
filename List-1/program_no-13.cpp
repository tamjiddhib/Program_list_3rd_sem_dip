#include<iostream>
using namespace std;
int sum(int n);
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int n;

	cout<<"Enter the numebr : ";
	cin>>n;
	
	sum(n);
	return 0;
}
int sum(int n)
{
	int i,s=0;
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	cout<<s;
}
