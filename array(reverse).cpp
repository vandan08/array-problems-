#include<iostream>
#include<bits/stdc++.h> //optional 
using namespace std;

int main(){

	int a[5]={2,3,4,5,6};
	
	int l=0;
	int r=4; // to declare n-1 , here n is total size of elements present in array 
	
	while(l<r)
	{
		//swap a[l] and a[r]
		int temp = a[r];
		a[r]= a[l];
		a[l]=temp;
		
		l++;
		r--;
		
		
	}
	
	for(int i=0;i<=4;i++)
	{
		cout<<a[i]<<" ";
	}
	
		
	return 0;			
}
