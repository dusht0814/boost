/* 
Author :- Dushyant Pratap Singh
Date :- 03/03/2018
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	cout<<100000<<"\n"; //size of array
	for(int i=0;i<100000;i++)
		{
			cout<<rand()%1000000000+1<<" ";
		}
	cout<<"\n";
	cout<<100000<<"\n"; //number of queries
	for(int i=0;i<100000;i++)
	{
		int t=rand()%2+1;    //t=1 for query and t=2 for update
		cout<<t<<" ";
		int a=rand()%100000+1;
		int b=rand()%100000+1;
		if(a>b)
		swap(a,b);
		cout<<a<<" "<<b<<"\n";
	}
}
