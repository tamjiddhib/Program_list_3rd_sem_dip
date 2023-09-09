#include<iostream>
using namespace std;
int mat(int n,int m);
main()
{
	cout<<"I am Tamjeed Dhib"<<endl;
	cout<<"En_no:-220130318041 "<<endl;
	cout<<"._.._.._.._.._.._.._.._.._."<<endl;

	int n,m,res,a[20][20],i,j;

	cout<<"Enter the row :: ";
	cin>>n;

	cout<<"Enter the col :: ";
	cin>>m;
	
	res=(n,m);
	
	return 0;	
}

int mat(int n,int m)
{
	int i,j,a[20][20];

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j];
		}
	}

	return 0;
}
