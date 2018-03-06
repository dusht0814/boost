/* 
Author :- Dushyant Pratap Singh
Date :- 06/03/2018
*/
#include<bits/stdc++.h>
#include "segtree.h"

using namespace std;
int main()
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
	setval(1);
	build(0,0,n-1,a,comp1);

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
		cout<<query(0,l,r,0,n-1,comp1)<<"\n";}
		else
		{
		int ind,val;
		cin>>ind>>val;
		ind--;
		update(0,0,n-1,ind,val,comp1);
		}
		

	}
	t=clock()-t;
	float x=((float)t)/CLOCKS_PER_SEC;
	cout<<x<<"\n";
}
