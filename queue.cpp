#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();
    cout<<"Front element of the queue:"<<q.front()<<"\n";
    cout<<"Back element of the queue:"<<q.back()<<"\n";
    cout<<"Size of the queue is:"<<q.size()<<"\n";

    queue<int> q2;
    q2.push(5);
    q2.push(6);
    q2.push(7);
    q2.push(8);

    cout<<"Queue element from up to down:";
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<"\n";
    cout<<"Size of the Queue2:"<<q2.size();



}
