//find missing number in arr
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	int temp;
	cin>>n;
	int Arr[n];
	int Brr[n];
	sort(Arr,Arr+n);
	for(int i=0;i<n;i++)
	{
		cin>>Arr[i];
	}
	for(int i=0;i<n;i++)
	{
		Brr[i]=i+1;
	}
	for(int i=0;i<n-1;i++)
	{
		if(Arr[i]!=Brr[i])
		{
			temp=Arr[i];
		}
		
	}
	cout<<temp;
}
