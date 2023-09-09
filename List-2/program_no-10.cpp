#include<iostream>
using namespace std;
int print(int &p);
int main()
{
	int p;

	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	cout<<"Enter The Number ::";
	cin>>p;
	
	print(p);
	return 0;
}
int print(int &p)
{
	cout<<"The Number is ::"<<p;
}
