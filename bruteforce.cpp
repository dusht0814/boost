/* 
Author :- Dushyant Pratap Singh
Date :- 03/03/2018
*/


#include<bits/stdc++.h>

using namespace std;
int main()
{
	clock_t t;
	int n;
	t=clock();
	cin>>n;	
	vector<long long>a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	int q;
	cin>>q;	
	while(q--)
	{
		int t;
		cin>>t;
		if(t==1){
		int l,r;
		cin>>l>>r;
		l--;r--;
		long long res=a[l];
		for(int i=l;i<=r;i++)
		{
		res=min(a[i],res);
		}
		cout<<res<<"\n";
		}
		else
		{
		int ind,val;
		cin>>ind>>val;
		ind--;
		a[ind]=val;
		}
	}
	t=clock()-t;
	float x=((float)t)/CLOCKS_PER_SEC;
	cout<<x<<"\n";
}


