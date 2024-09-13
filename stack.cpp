#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    st.push(20);
    st.pop();

    cout<<"Top element of the stack:"<<st.top()<<endl;
    cout<<"size of the stack:"<<st.size()<<endl;

    cout<<"Is the stack is empty?"<<(st.empty()?"Yes":"No")<<endl;

    stack<int> st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);
    cout<<"stack elements from top to bottom:";
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<"\n";
    cout<<st2.size()<<endl;


}
