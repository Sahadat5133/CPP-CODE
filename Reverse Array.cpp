#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5]={10,20,30,40,50};
    int arraylength=sizeof(arr)/sizeof(int);
    //cout<<arraylength<<endl;
    reverse(arr,arr+arraylength);
    cout<<"Reverse an array element:";
    for(int i=0;i<arraylength;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
