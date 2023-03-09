#include<iostream>
using namespace std;

int main(){

int a[5]={1,2,3,4,5}; //output : 5 4 3 2 1 
int b[5];
int j=0; //to traverse on the array b  

  for(int i=4;i>=0;i--)
  {
    b[j]=a[i];
    j++;
  }

  for(j=0;j<5;j++)
  {
    cout<<b[j]<<" " <<;
  }

return 0;
}
