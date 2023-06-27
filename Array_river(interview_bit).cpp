#include<iostream>
using namespace std;

int arr[3][3]={{0,1,0},{1,0,1},{1,1,0}};
int row=0,col=0;

//void up(arr[][2]){
//		arr[row][col-1]=2;
//}
//
//void greet(){
//	cout<<"heloo";
//}

int main(){
	
	
//	cout<<"enter the lement of an array :"<<endl;
//	for(int row=0;row<3;row++){
//		for(int col=0;col<3;col++){
//			cin>>arr[row][col];
//		}
//	}
	cout<<"elements in the array are :"<<endl;
	for(int row=0;row<3;row++){
	    cout<<"[ ";
		for(int col=0;col<3;col++){
			cout<<arr[row][col] <<" ";
		}
		cout<<"]";
		cout<<endl;
	}
	
	cout<<endl;
	
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			if(arr[row][col]==1)
			{
				cout<<"Elements which have property('1'): ["<<row<<"]["<<col<<"]."<<endl;
				
				if(arr[row-1][col] == 0){
					continue;
				}
				else {
				//LEFT SIDE
				arr[row-1][col] = 2;	
				}
				
				if(arr[row][col-1] == 0){
					continue;
				}
				else {
				//UP SIDE 
				arr[row][col-1] = 2;	
				}
				
				
				if(arr[row][col+1] == 0){
					continue;
				}
				else {
				//DOWN SIDE 
				arr[row][col+1] = 2;	
				}
				
				
				if(arr[row+1][col] == 0){
					continue;
				}
				else {
				//RIGHT SIDE 
				arr[row+1][col] = 2;	
				}
			}
		}
	}
	
	cout<<"\nChanged array :"<<endl;
	for(int row=0;row<3;row++){
	    cout<<"[ ";
		for(int col=0;col<3;col++){
			cout<<arr[row][col] <<" ";
		}
		cout<<"]";
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
