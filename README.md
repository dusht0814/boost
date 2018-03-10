# boost
Enhancing Boost.Intrusive Library


This repository contains 8 files :-
1. segtree.h :- header file which contains the segment tree implementation.
2. test.cpp :- this file imports the segtree header file and test the segment tree library.
3. bruteforce.cpp :- contains a brute force solution.
4. analysis.ods :- performance analysis of test.cpp and bruteforce.cpp .
5. Tesgen.cpp :- c++ program to generate a test case.
6. input.txt :- sample test case
7. segout.txt :- output of test.cpp on input.txt
8. bruteout.txt :- output of bruteforce.cpp on input.txt
9. bruteforce.h :- naive solution 
10. Utest.cpp :- Unit test using boost's library unit_test for comparing bruteforce and segment tree solution.

For Unit Test:

$ g++ Utest.cpp -o Utest -lboost_unit_test_framework-mt -std=c++14

$ ./Utest --log_level=test_suite


How to use :

1.Import segtree.h using #include "segtree.h".

2.User have to input :
  
  a) setval(1) and comp1 for maximum segment tree.
  
  b) setval(2) and comp2 for minimum segment tree.

  c) setval(3) and comp3 for gcd segment tree.

  d) setval(4) and comp4 for summation segment tree.
  
  
3.Depending upon your usage call (Use 0 based indexing):

  a)build(0,0,array_size-1,your_array,compX) this function builds your segmentree and sets each parent node according to the comparator's property.
  
  
  b)query(0,query_low,query_high,0,array_size-1,compX) this function returns answer according to the comparartor from query_low to query_high inclusive.
  
 
  c)update(0,0,array_size-1,ind,value,compX) this function changes the value of your_array at index to value in the segment tree(your_array[ind]=val)
  
  
