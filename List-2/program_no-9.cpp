#include<iostream>
#include<iomanip>
using namespace std;
float  m,n;
main()
{
	// scope resolution 

	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	cout<<"Enter the value of M ::  ";
	cin>>::m;
	cout<<"Enter the value of N ::  ";
	cin>>::n;
	
	cout<<"value of M is   ::  "<<::m<<endl;
	cout<<"Value of N is   ::  "<<::n<<endl;
	cout<<"Sum of M & N    ::  "<<::m+::n<<setprecision(5);
	return 0;
}
