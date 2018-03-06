/* 
Author :- Dushyant Pratap Singh
Date :- 06/03/2018
*/

	#include<bits/stdc++.h>
	#define INF 1000000000 
	using namespace std;
	vector<long long> tree(4000000,0); //default size of segment tree 4000000
	
        template<class T>
        T comp1(T a,T b)
        {return max(a,b);}

	template<class T>
        T comp2(T a,T b)
        {return min(a,b);}

	template<class T>
        T comp3(T a,T b)
        {return __gcd(a,b);}

	template<class T>
        T comp4(T a,T b)
        {return (a+b);}
	
	int def;
	void setval(int x)
	{
	    if(x==1)
		def=-INF;
	    if(x==2)
		def=INF;
	    if(x==3)
		def=0;
	    if(x==4)
		def=0;
	} 

	template<class T>
	void build(T pos,T start,T end,vector<T>&a,T (*cmp)(T,T))
	{
		if(start==end)
		{
			tree[pos]=a[start];
		}
		else
		{
			T mid=(start+end)/2;
			build(2*pos+1,start,mid,a,cmp);
			build(2*pos+2,mid+1,end,a,cmp);
			tree[pos]=cmp(tree[2*pos+1],tree[2*pos+2]);
		}
	}
	template<class T>	
	T query(T pos,T qlow,T qhigh,T L,T R,T (*cmp)(T,T))
	{
		
		if( qlow>R || qhigh<L)
		{
			return def;
		}
		if(qlow<=L && qhigh>=R)
		{
			return tree[pos];
		}
			T mid=(L+R)/2;
			T q1=query(2*pos+1,qlow,qhigh,L,mid,cmp);
			T q2=query(2*pos+2,qlow,qhigh,mid+1,R,cmp);
			return cmp(q1,q2);
	
	}
	template<class T>	
	void update(T pos,T a,T b,T ind,T val,T (*cmp)(T,T))
	{
		if(a==b)
		{
			tree[pos]=val;
			return;
		}
		else
		{
			T mid=(a+b)/2;
			if(a<=ind && ind<=mid)
				update(2*pos+1,a,mid,ind,val,cmp);
			else
				update(2*pos+2,mid+1,b,ind,val,cmp);
			tree[pos]=cmp(tree[2*pos+1],tree[2*pos+2]);
		}
	}
