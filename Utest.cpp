#include <boost/test/unit_test.hpp>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include "segtree.h"
#include "bruteforce.h"
#define BOOST_TEST_MODULE unit_test
#define BOOST_TEST_DYN_LINK

BOOST_AUTO_TEST_SUITE(test)

BOOST_AUTO_TEST_CASE(sum)
{
	fstream fp;
	fp.open("Input.txt",ios::in);
	int t;
	fp>>t;
	for(int i=0;i<t;i++)
	{
		int n,q;
		fp>>n>>q;
		vector<int>a(n);
		for(int i=0;i<n;i++)
			fp>>a[i];
		setval(4);
		build(0,0,n-1,a,comp1);

		for(int i=0;i<q;i++)
		{
			int query;
			fp>>query;
			if(query==1)
			{
				int ind,val;
				fp>>ind>>val;
				update(0,0,n-1,ind,val,comp4);
				updatesum(a,ind,val);
			}
			else
			{
				int bruteans,treeans,l,r;
				fp>>l>>r;
				l--;r--;
				bruteans=sum(a,l,r);
				treeans=query(0,l,r,0,n-1,comp4);
				BOOST_CHECK_EQUAL(bruteans,treeans);
			}

		}
	}
	fp.close();
}

BOOST_AUTO_TEST_CASE(maximum)
{
	fstream fp;
	fp.open("Input.txt",ios::in);
	int t;
	fp>>t;
	for(int i=0;i<t;i++)
	{
		int n,q;
		fp>>n>>q;
		vector<int>a(n);
		for(int i=0;i<n;i++)
			fp>>a[i];
		setval(1);
		build(0,0,n-1,a,comp1);

		for(int i=0;i<q;i++)
		{
			int query;
			fp>>query;
			if(query==1)
			{
				int ind,val;
				fp>>ind>>val;
				update(0,0,n-1,ind,val,comp1);
				updatemx(a,ind,val);
			}
			else
			{
				int bruteans,treeans,l,r;
				fp>>l>>r;
				l--;r--;
				bruteans=mx(a,l,r);
				treeans=query(0,l,r,0,n-1,comp1);
				BOOST_CHECK_EQUAL(bruteans,treeans);
			}

		}
	}
	fp.close();
}

BOOST_AUTO_TEST_SUITE_END()
