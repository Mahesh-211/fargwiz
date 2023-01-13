//return index of sum of target variable
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	vector<int> ans;
	int Arr[n];
	int target;
	cin>>target;
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=n;j--)
		{
		if((Arr[i]+Arr[j])==target)
		{
			a=i;
			b=j;
			//cout<<j;
//			 break;	
		}
					 
			 
}
	}
	cout<<a<<" "<<b;
	//cout<<a<<" "<<b;
}
