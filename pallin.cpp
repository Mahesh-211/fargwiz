//Pallindron number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t,sum=0,rem;
	t=n;
	while(n!=0)
	{
		//t=n;
		rem=n%10;
		sum=sum*10+rem;
		n/=10;
	}
	if(t!=sum)
	{
		cout<<"false";
	}
	else
	{
		cout<<"true";
	}
}
