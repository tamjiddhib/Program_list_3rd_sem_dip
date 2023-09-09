#include<iostream>
using namespace std;
main()
{
	cout<<"I am Tamjeed dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;
	
	int p,r,t,ci;
	
	cout<<"Enter the Amount :: ";
	cin>>p;
	/// P means price of money

	cout<<"Enter the Rate   :: ";
	cin>>r;
	/// R means rate

	cout<<"Enter the Time   :: ";
	cin>>t;
	/// T means time 

	ci = p*((1+r/100)^t);
	/// ci means compund interest

	cout<<"Compund Interest is  ::"<<ci;
	
	return 0;
}