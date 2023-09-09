#include <iostream>
using namespace std;
int num;
int& test();
int main() 
{
  	test() = 5;
 	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

  cout << num;
  return 0;
}
int& test() 
{
  	return num;
}	
