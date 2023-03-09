#include<iostream>
using namespace std;

int main(){
	int arr[50],n,idx;
	cout<<"enter the size of array:"<<endl;
	cin>>n;
	cout<<"enter the element of array:"<<endl;
	for(idx=0;idx<n;idx++){
		cin>>arr[idx];
	}
	cout<<"array elements are: "<<endl;
	for(idx=0;idx<n;idx++){
		cout<<arr[idx]<<"";
	}
	return 0;

}

