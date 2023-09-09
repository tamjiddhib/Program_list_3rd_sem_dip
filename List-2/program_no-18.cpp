#include<iostream>
#define PI 3.14
using namespace std;
class area{
	private:
		float r;
	public:
		void circle(float r)
		{
			cout<<"Value of : "<<PI*r*r;
		}
};
int  main()
{
	
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	area a;
	a.circle(6);	
	return 0;
}
