#include<iostream>
using namespace std;
float area(float r,const float pi = 3.14)
{
	cout<<"Area of circle : "<<pi*r*r;
}
int main()
{
	float r;
	
	cout<<"I am shyam panchasara "<<endl;
	cout<<"En_no    220130318006 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the Circle radius : ";
	cin>>r;
	
	area(r);
	
	return 0;
}
