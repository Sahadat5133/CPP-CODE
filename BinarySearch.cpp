#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int x,int l,int h){
   while(l <= h){
    int mid=(l+(h-l))/2;
    if(x == a[mid])
    return mid;

    if(x < a[mid]){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
   }
   return -1;

}
int main(void){
  int a[]={5,8,9,4,3};
  int x=9;
  int n=sizeof(a)/sizeof(a[0]);
  int result=int binarysearch(a,x,0,n-1)
  if(result == -1){
    cout<<"x is not found";
  }
  else{
    cout<<"x is found at index:"<<result<<endl;
  }

}
