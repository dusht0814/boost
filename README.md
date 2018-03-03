# boost
Enhancing Boost.Intrusive Library


This repository contains 4 files :-
1. segtree.h :- header file which contains the segment tree implementation.
2. test.cpp :- this file imports the segtree header file and test the segment tree library.
3. bruteforce.cpp :- contains a brute force solution.
4. analysis.ods :- performance analysis of test.cpp and bruteforce.cpp .

How to use :
1.Import segtree.h using #include "segtree.h"
2.Depending upon your usage call :
  a)buildmin(0,0,array_size-1,your_array) this function builds your segmentree and sets each parent node as minimum of their child.
  b)buildmax(0,0,array_size-1,your_array) this function builds your segmentree and sets each parent node as maximum of their child.
  c)buildsum(0,0,array_size-1,your_array) this function builds your segmentree and sets each parent node as sum of their child.
  d)querymin(0,query_low,query_high,0,array_size-1) this function returns minimum element from query_low to query_high inclusive.
  e)querymax(0,query_low,query_high,0,array_size-1) this function returns maximum element from query_low to query_high inclusive.
  f)querysum(0,query_low,query_high,0,array_size-1) this function returns sum of elements from query_low to query_high inclusive.
  e)updatemin(0,0,array_size-1,ind,value) this function changes the value of your_array at index to value in the minimum segment tree(your_array[ind]=val)
  f)updatemax(0,0,array_size-1,ind,value) this function changes the value of your_array at index to value in the maximum segment tree(your_array[ind]=val)
  g)updatesum(0,0,array_size-1,ind,value) this function changes the value of your_array at index to value in the summation segment tree(your_array[ind]=val)
3. If the queries are Q and array elements are N then  time complexity of this program is QlogN .
