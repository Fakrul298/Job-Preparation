#include<bits/stdc++.h>
using namespace std;
#define M 32
int main()
{
    bitset<M>b1,b2(5),b3("110");
    b1[(M-1)-3] = 0;
    cout<<"b1 (initially) : "<<b1<<endl;
    cout<<"b2 (initially) : "<<b2<<endl;
    cout<<"b3 (initially) : "<<b3<<endl;
    cout<<"b1.size() : "<<b1.size()<<endl;
    cout<<"b1.none() : "<<b1.none()<<endl;//b1.none() returns 1 ->(if none of the bit is 1)
    //else return 0
    cout<<"b1.any() : "<<b1.any()<<endl;//b1.any() returns 1 -> (if any of the bit is 1)
    //else return 0
    b1.set(4);                          //b1.set(pos) : set pos-th position(from right) 1
    cout<<"b1.set(4) : "<<b1<<endl;
    b1.set();                           //b1.set() : set all the bits 1
    cout<<"b1.set() = "<<b1<<endl;
    b1.set(3,0);                        //b1.set(pos,b) : set the pos-th bit(from right) to b (ba can be 0/1)
    cout<<"b1.set(3,0) : "<<b1<<endl;
    b2.set();
    cout<<"b2.set() = "<<b2<<endl;
    b3.set();
    cout<<"b3.set() = "<<b3<<endl;
    b3.flip();                          //b3.flip() : flips all the bits of bit(if 0 set it 1 and if 0 set it 1)
    cout<<"b3.flip() : "<<b3<<endl;
    b3.flip(3);                         //b3.flip(pos) : flips pos-th bit(from right) of bit(if 0 set it 1 and if 0 set it 1)
    cout<<"b3.flip(3) : "<<b3<<endl;
    int num;
    cout<<"input a number to convert it to binary : ";
    cin>>num;
    bitset<32>bit(num);
    cout<<bit<<endl;

    int n = bit.to_ullong();
    cout<<"bit.to_ullong() : "<<bit.to_ullong()<<endl;
    return 0;
}
