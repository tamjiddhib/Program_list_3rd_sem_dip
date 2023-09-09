#include<iostream>
using namespace std;
int palim(int n);
int main() 
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int n;

	cout<<"Enter the number : ";
	cin>>n;

	palim(n);

	return 0;
}
int palim(int n)
{
	int rev=0,rem,temp;

	temp = n;

	while(n>0)
	{
		rem = n%10;
		rev = (rev*10)+rem;
		n = n/10;
	}
	if(temp==rev)
	{
		cout<<"This is  palimdrome.";
	}
	else
	{
		cout<<"This is not palimdrome.";
	}
}
