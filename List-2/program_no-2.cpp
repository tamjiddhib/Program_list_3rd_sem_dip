#include<iostream>
using namespace std;

int fun()
{
	int a;
	static int b;
	
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	cout<<"Value of a is (non- static): "<<a++<<endl;
	cout<<"value of b is (static)     : "<<b++<<endl;
}
int main()
{	
	for(int i=0;i<5;i++)
	{
		fun();	
	}
	return 0;	
}
