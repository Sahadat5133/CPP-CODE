#include<bits/stdc++.h>
using namespace std;
int main()
{
    auto x = 10;// type inference
    cout<<typeid(x).name()<<"\n";
    auto b='c';
    cout<<typeid(b).name()<<"\n";
    auto y = 10.42;
    cout<<typeid(y).name()<<"\n";
    int a[]={5,3,1,2,4};
    sort(a,a+5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    pair<int,double> p,q;
    p = make_pair(5,2.5);
    q = make_pair(4,2);
    swap(p,q);
    cout<<p.first<<" "<<p.second<<"\n";
    cout<<q.first<<" "<<q.second<<"\n";

    pair<int,int> points[10];
    points[0] = make_pair(0,1);
    points[1] = make_pair(2,3);
    points[2] = make_pair(4,5);
    for(int i=0;i<3;i++){
        cout<<points[i].first<<" "<<points[i].second<<"\n";
    }

}
