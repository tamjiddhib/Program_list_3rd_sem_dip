#include<iostream>
#define PI 3.14
using namespace std;
class area
{
	private:
		int s;
		double r;
		int l,b;
	public:
		void Area(int l,int b)
		{
			cout<<l*b<<endl;
		}
		void Area(int s)
		{
			cout<<s*4<<endl;
		}
		void Area(double r)
		{
			cout<<PI*r*r<<endl;
		}
};
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	area a;

	a.Area(4,5);
	a.Area(4);
	a.Area(3.34); 
	return 0;
}
