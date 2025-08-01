#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pos_count=0;
    int neg_count=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)pos_count++;
        else{neg_count++;}
    }
   
    int loc=0;
    
        if(pos_count>neg_count)
        {
            for(int j=0;j<n;j++){
                if(arr[j]%2!=0)
                {
                     loc=j+1;
                    break;
                }
                           }
        }
        else{
            for(int j=0;j<n;j++)
            {
                if(arr[j]%2==0)
                {
                    loc=j+1;
                    break;
                }
            }
        }
        cout<<loc<<endl;
    
}