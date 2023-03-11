#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[2][3];
	int b[2][3];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
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
	cout<<endl;
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++)
		{
		
		cout<<"b["<<i<<"]["<<j<<"]:";
		cin>>b[i][j];
		
		
			}
			cout<<endl;

	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
		{
		
	
		cout<<b[i][j];
		
		
			}
			cout<<endl;

	}
	cout<<endl;
	cout<<"addition of two materix "<<endl;
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++)
		{
		
	int c[2][3];
	c[i][j]=a[i][j]+b[i][j];
	cout<<c[i][j]<<" ";
		
		
		
			}
			cout<<endl;

	}
	
	
	return 0;			
}
