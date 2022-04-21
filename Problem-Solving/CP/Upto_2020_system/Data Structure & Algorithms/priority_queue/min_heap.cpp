#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq,tpq;//it's top() element is constant
    int n;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<"now : "<<endl;
    tpq = pq;
    //swap(pq,tpq);
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\nSize : "<<pq.size();
    cout<<"\ntop : "<<pq.top();
    pq.pop();
    tpq = pq;
    cout<<"\nafter 1 pop()"<<endl;
    //swap(pq,tpq);
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\ntop(after 1 pop) : "<<pq.top();
    pq.push(100);
    tpq = pq;
    cout<<"\nafter pushing 100 : "<<endl;
    //swap(pq,tpq);
    while(!tpq.empty())
    {
        cout<<tpq.top()<<" ";
        tpq.pop();
    }
    cout<<"\ntop(after pushing 100) : "<<pq.top();
    cout<<"\ntop : "<<pq.top();
    return 0;
}

