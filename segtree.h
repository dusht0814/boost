/* 
Author :- Dushyant Pratap Singh
Date :- 03/03/2018
*/
	#include<bits/stdc++.h>
	#define INF 1000000000 
	using namespace std;
	typedef long long T;	
	vector<long long> tree(4000000,0); //default size of segment tree 4000000
	
	void buildmin(T pos,T start,T end,vector<T>&a)
	{
		if(start==end)
		{
			tree[pos]=a[start];
		}
		else
		{
			T mid=(start+end)/2;
			buildmin(2*pos+1,start,mid,a);
			buildmin(2*pos+2,mid+1,end,a);
			tree[pos]=min(tree[2*pos+1],tree[2*pos+2]);
		}
	}
	void buildmax(T pos,T start,T end,vector<T>&a)
	{
		if(start==end)
		{
			tree[pos]=a[start];
		}
		else
		{
			T mid=(start+end)/2;
			buildmax(2*pos+1,start,mid,a);
			buildmax(2*pos+2,mid+1,end,a);
			tree[pos]=max(tree[2*pos+1],tree[2*pos+2]);
		}

	}
	void buildsum(T pos,T start,T end,vector<T>&a)
	{
		if(start==end)
		{
			tree[pos]=a[start];
		}
		else
		{
			T mid=(start+end)/2;
			buildsum(2*pos+1,start,mid,a);
			buildsum(2*pos+2,mid+1,end,a);
			tree[pos]=tree[2*pos+1]+tree[2*pos+2];
		}
	}
	T querymin(T pos,T qlow,T qhigh,T L,T R)
	{
		
		if( qlow>R || qhigh<L)
		{
			return INF;
		}
		if(qlow<=L && qhigh>=R)
		{
			return tree[pos];
		}
			T mid=(L+R)/2;
			T q1=querymin(2*pos+1,qlow,qhigh,L,mid);
			T q2=querymin(2*pos+2,qlow,qhigh,mid+1,R);
			return min(q1,q2);
	
	}	
	T querymax(T pos,T qlow,T qhigh,T L,T R)
	{
		
		if( qlow>R || qhigh<L)
		{
			return -INF;
		}
		if(qlow<=L && qhigh>=R)
		{
			return tree[pos];
		}
			T mid=(L+R)/2;
			T q1=querymax(2*pos+1,qlow,qhigh,L,mid);
			T q2=querymax(2*pos+2,qlow,qhigh,mid+1,R);
			return max(q1,q2);
	
	}	

	T querysum(T pos,T qlow,T qhigh,T L,T R)
	{
		
		if( qlow>R || qhigh<L)
		{
			return 0;
		}
		if(qlow<=L && qhigh>=R)
		{
			return tree[pos];
		}
			T mid=(L+R)/2;
			T q1=querysum(2*pos+1,qlow,qhigh,L,mid);
			T q2=querysum(2*pos+2,qlow,qhigh,mid+1,R);
			return q1+q2;
	
	}	
	void updatemin(T pos,T a,T b,T ind,T val)
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
				updatemin(2*pos+1,a,mid,ind,val);
			else
				updatemin(2*pos+2,mid+1,b,ind,val);
			tree[pos]=min(tree[2*pos+1],tree[2*pos+2]);
		}
	}
	void updatemax(T pos,T a,T b,T ind,T val)
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
				updatemax(2*pos+1,a,mid,ind,val);
			else
				updatemax(2*pos+2,mid+1,b,ind,val);
			tree[pos]=max(tree[2*pos+1],tree[2*pos+2]);
		}
	}
	void updatesum(T pos,T a,T b,T ind,T val)
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
				updatesum(2*pos+1,a,mid,ind,val);
			else
				updatesum(2*pos+2,mid+1,b,ind,val);
			tree[pos]=tree[2*pos+1]+tree[2*pos+2];
		}
	}
	







	
