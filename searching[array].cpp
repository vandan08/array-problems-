#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int flag=0; //variable if we don't get element then change varible value 
	
	int search;
	
	cout<<"enter the element which you want to search : ";
	cin>>search;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			if(arr[i][j]==search)
			{
				flag=1;
				cout<<"The element"<<search<<"is present :"<<endl;
				cout<<"The row number is : "<<i<<endl;
				cout<<"The column number is : "<<j<<endl;
			}
			
		}
	}
	
	
	if(flag == 1 )
	{
		cout<<"Element doesn't exists in the current dictionary !!";
	}
	
	
	return 0;			
}
