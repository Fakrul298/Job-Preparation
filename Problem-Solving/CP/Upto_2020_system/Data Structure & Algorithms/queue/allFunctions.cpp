#include<bits/stdc++.h>
using namespace std;
/*void showQueue(queue<int>Q)
{
    queue<int>p;
    p = Q;//assigning
    while(!p.empty())//empty()[check whether the queue is empty or not]
    {
        cout<<p.front()<<" ";
        p.pop();//pop()[delete the top/first element of the queue
    }
}*/
void showQueue(int* p,int n)
{
    int* in;
    in = p;
    for(int i=0; i<n ; i++)
    {
        cout<<*(in)<<" ";
        in++;
    }
}
void takeInputToQueue(queue<int>p,int n)
{
    queue<int>Q;
    Q = p;
    for(int i=0; i<n ; i++)
    {
        int x;//input a number to insert it to the queue
        cin>>x;
        Q.push(x);//push()
        //Q.emplace(x);//same as push()
    }
}

int main()
{
    cout<<"Q :"<<endl;
    queue<int>Q;
    int sizeOfQ;
    cin>>sizeOfQ;
    takeInputToQueue(Q,sizeOfQ);
    int* fq = &(Q.front());
    showQueue(fq,sizeOfQ);
    cout<<"\nR :"<<endl;
    queue<int>R;
    int sizeOfR;
    cin>>sizeOfR;
    takeInputToQueue(R,sizeOfR);
    int* fr = &(R.front());
    showQueue(fr,sizeOfR);
    swap(R,Q);
    cout<<"\nAfter swap : "<<endl;
    cout<<"Q : "<<endl;
    showQueue(fq,sizeOfR);
    cout<<"\nAfter swap : "<<endl;
    cout<<"R : "<<endl;
    showQueue(fr,sizeOfR);
    return 0;
}
