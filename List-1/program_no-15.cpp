#include<iostream>
using namespace std;
int prime(int n);
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int n;

	cout<<"Enter the number : ";
	cin>>n;

	prime(n);

	return 0;
}
int prime(int n)
{
	int flag=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"This is prime number : ";
	}
	else
	{
		cout<<"This not prime number : ";
	}
}
