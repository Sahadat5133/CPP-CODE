#include<bits/stdc++.h>
using namespace std;

int main()
{   cout<<"Enter the size of array:";
    int n,x;
    cin>>n>>x;
    int a[n];
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] == x){
            cout<<"x is found at index:"<<i<<endl;
            return 0;
        }
    }
    cout<<"x is not found";
    return 0;

}
