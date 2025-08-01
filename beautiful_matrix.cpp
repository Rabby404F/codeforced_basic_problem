#include<iostream>
using namespace std;
int main(){

  int arr[5][5];
  

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>arr[i][j];
    }
  }
  int x,y;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(arr[i][j]==1)
      {x=i;
      y=j;}
    }
  }
   
  int sum=abs(x-2)+abs(y-2);
  cout<<sum<<endl;

  return 0;
  
}