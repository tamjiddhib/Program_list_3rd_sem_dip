#include<iostream>
using namespace std;
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int a,b,opr;
	
	cout<<"Enter the a : ";
	cin>>a;
	cout<<"Enter the b : "<<endl;
	cin>>b;

	cout<<"1) Addition is :: "<<endl;
	cout<<"2) Subtraction is :: "<<endl;
	cout<<"3) Multiplication is :: "<<endl;
	cout<<"4) Division is :: "<<endl;
	cout<<"5) Modulo is :: "<<endl;

	cout<<"Enter the Opreator : ";
	cin>>opr;
	
	switch(opr)
	{
		case 1:
			cout<<"A + b :: "<<a+b;
		break;
		case 2:
			cout<<"A - b :: "<<a-b;
		break;
		case 3:
			cout<<"A * B :: "<<a*b;
		break;
		case 4:
			cout<<"A / B :: "<<a/b;
		break;
		case 5:
			cout<<"A % B :: "<<a%b;
		break;
		default:
			cout<<"ERROR";
	}
}
