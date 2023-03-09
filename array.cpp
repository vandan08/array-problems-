#include<iostream>
using namespace std;

int main(){
	
	
//storing and displaying array 	
	//		int arr[50],n,idx;
	//		cout<<"enter the size of array:"<<endl;
	//		cin>>n;
	//		cout<<"enter the element of array:"<<endl;
	//		for(idx=0;idx<n;idx++){
	//			cin>>arr[idx];
	//		}
	//		cout<<"array elements are: "<<endl;
	//		for(idx=0;idx<n;idx++){
	//			cout<<"["<<arr[idx]<<"] ";
	//		}
	//	
	//	
//sum of array element 
	//
	//	int sum=0;
	//	for(int i=0;i<n;i++){
	//		sum=sum+arr[i];
	//	}
	//	
	//	cout<<"\nsum of all elements above is :"<<sum;
	//	
		

//maximum from given array

	//	int a[5]={1,23,425,22,412};
	//	int max=a[0];
	//	
	//	for(int i=0;i<5;i++)
	//	{
	//		if(a[i]>max)
	//		{
	//			max=a[i];
	//		}
	//	}
	//	
	//	cout<<"The maximum element in the array is :"<<max<<endl;
	
	
	
//count the even element in the given array 

	int a[10]={18,2,302,33,45,7,64,32,65,75},count;
	
	for(int i=0;i<10;i++){
		
		if(a[i]%2==0)
		{
			count++;
		}
		
	}
	
	cout<<"count of even element in the array is :"<<count;
		
	return 0;

}

