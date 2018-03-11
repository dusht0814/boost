#ifndef bruteforce_h
#define bruteforce_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int sum(vector<int>a, int l, int r){
    int sum1 = 0;
    for(int i = l; i <= r; ++i)
        sum1 += a[i];
    return sum1;
}

void updatesum(vector<int>&a,int ind,int val)
{
	a[ind]=val;
}

int mx(vector<int>a,int l,int r)
{
	int ans=a[l];
	for(int i=l+1;i<=r;i++)
		if(ans<a[i])
			ans=a[i];
	return ans;
}

void updatemx(vector<int>&a,int ind,int val)
{
	a[ind]=val;
}

#endif
