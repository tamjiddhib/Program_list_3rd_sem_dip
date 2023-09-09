// CPP Program to demonstrate Default Arguments
#include<iostream>
using namespace std;
int sum(int A,int B,int C=0,int D=0) 
{
	return(A+B+C+D);
}
int main()
{
 	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	cout<<sum(10,19) <<endl;
	cout<<sum(29,11,49)<<endl;
	cout<<sum(11,51,12,100)<<endl;
	return 0;
}
