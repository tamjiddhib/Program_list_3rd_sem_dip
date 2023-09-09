#include<iostream>
using namespace std;
class temp
{
	private:
		int a,b,c;
	public:
		void Temp(int a,int b)
		{
			cout<<"Sum of first two numbers : "<<a+b;
		}
		void Temp(int a,int b,int c)
		{
			cout<<"Sum of three numbers : "<<a+b+c;
		}
};
int main()
{
	temp t;

	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	t.Temp(40,20);
	t.Temp(40,20,17);
	
	return 0;
}
