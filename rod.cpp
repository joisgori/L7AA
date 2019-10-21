#include <iostream>
#include<stdio.h> 
#include<limits.h> 
using namespace::std;

int max(int a, int b) { return (a > b)? a : b;} 

int cutRod(int price[], int n) 
{ 
if (n <= 0) 
	return 0; 
int max_val = INT_MIN; 

// Recursively cut the rod in different pieces and compare different 
// configurations 
for (int i = 0; i<n; i++) 
		max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 
return max_val; 
} 

int main() 
{ 
	int n,arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
	cin >> n;
	printf("La ganancia maxima es: %d", cutRod(arr, n));
  cout<< "\n"; 
	getchar(); 
	return 0; 
} 
