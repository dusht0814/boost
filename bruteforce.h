#ifndef naive_h
#define naive_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int sum(vector<int>a, int l, int r){
    int sum = 0;
    for(int i = l; i <= r; ++i)
        sum += a[i];
    return sum;
}

void updatesum(vector<int>&a,int ind,int val)
{
	v[ind]=val;
}

int mx(vector<int>v,int l,int r)
{
	int ans=a[l];
	for(int i=l+1;i<=r;i++)
		if(ans<a[i])
			ans=a[i];
	return mx;
}

void updatemx(vector<int>&a,int ind,int val)
{
	v[ind]=val;
}

#endif#ifndef naive_h
#define naive_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int sum(vector<int>a, int l, int r){
    int sum = 0;
    for(int i = l; i <= r; ++i)
        sum += a[i];
    return sum;
}

void updatesum(vector<int>&a,int ind,int val)
{
	v[ind]=val;
}

int mx(vector<int>v,int l,int r)
{
	int ans=a[l];
	for(int i=l+1;i<=r;i++)
		if(ans<a[i])
			ans=a[i];
	return mx;
}

void updatemx(vector<int>&a,int ind,int val)
{
	v[ind]=val;
}

#endif
