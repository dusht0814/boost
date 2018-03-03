/* 
Author :- Dushyant Pratap Singh
Date :- 03/03/2018
*/
#include<bits/stdc++.h>
#include "segtree.h"
#define int long long
using namespace std;
main()
{
	clock_t t;
	int n;
	t=clock();
	cin>>n;	
	vector<int>a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	buildmin(0,0,n-1,a);
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
		cout<<querymin(0,l,r,0,n-1)<<"\n";}
		else
		{
		int ind,val;
		cin>>ind>>val;
		ind--;
		updatemin(0,0,n-1,ind,val);
		}
		

	}
	t=clock()-t;
	float x=((float)t)/CLOCKS_PER_SEC;
	cout<<x<<"\n";
}
