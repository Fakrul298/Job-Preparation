#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq,tpq;
    int n;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<"\ninitially : "<<endl;
    tpq = pq;
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\nSize : "<<pq.size();
    cout<<"\ntop : "<<pq.top();
    pq.pop();
    cout<<"\nafter 1 pop() :"<<endl;
    tpq = pq;
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\ntop : "<<pq.top();
    pq.push(100);
    cout<<"\nafter pushing 100 :"<<endl;
    tpq = pq;
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\ntop(after pushing 100) : "<<pq.top();
    cout<<endl;
}
