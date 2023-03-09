#include<iostream>
using namespace std;

int main(){
	
	int arr[3][2];
	cout<<"enter the lement of an array :"<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<2;col++){
			cin>>arr[row][col];
		}
	}
	cout<<"elements in the array are :"<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<2;col++){
			cout<<arr[row][col];
		}
	}
	return 0;
}
