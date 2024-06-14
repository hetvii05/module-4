//q-1. write a program of two swap the two value using templates.

#include <iostream> 
using namespace std; 
  
// Function template to swap 
// two numbers 
template <class T> 
 swap_numbers(T& x, T& y) 
{ 
    T t; 
    t = x; 
    x = y; 
    y = t; 
    
} 
 main() 
{ 
    int a, b;   
	  a = 10, b = 20; 
    cout<<"Before Swap"<<endl;
    cout<< a << " " << b <<endl; 


    swap_numbers(a, b); 
    cout<<"After Swap"<<endl;
    cout << a << " " << b << endl; 
    
}
