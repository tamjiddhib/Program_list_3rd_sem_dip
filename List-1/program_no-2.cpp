#include<iostream>
using namespace std;
class temp
{
	private:
		float fahern , celsius;
	public:
	float conversion(float f)
	{
		fahern = f;
		celsius = (fahern-32)*5/9;
		return celsius;
	 } 
};
int main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	temp t;
	float f;
	
	cout<<"Enter the Teamprature in fahernhit : ";
	cin>>f;

	cout<<"Temprature in celsius = "<<t.conversion(f);

	return 0;
}
