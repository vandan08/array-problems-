#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[2][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
		{
		
		cout<<"a["<<i<<"]["<<j<<"]:";
		cin>>a[i][j];
		
		
			}
			cout<<endl;

	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
		{
		
	
		cout<<a[i][j];
		
		
			}
			cout<<endl;

	}
	
	
	
	return 0;			
}
