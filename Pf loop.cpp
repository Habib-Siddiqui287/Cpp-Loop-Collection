#include<iostream>
using namespace std;
int main()
{
	int num,i=1;
	cout<<"Enter a number:";
	cin>>num;
	do
	{
		if(i%2!=0)
		{
			cout<<i<<" ";
		}
		i++;
	}
	while(i<=num);
	{
		cout<<endl;
	}
}

