#include<bits/stdc++.h>
using namespace std;
void checkingPowerOf2()
{
    cout<<"======checking whether a number is a power of 2 =========="<<endl;//x be an int if (x&x-1)==0 then x is power of 2
    cout<<"Enter a number to check : ";int x1 ; cin>>x1;
    if((x1&x1-1) == 0) cout<<x1<<" is power of 2"<<endl;
    else cout<<x1<<" is not power of 2"<<endl;
}
void leftShift()
{
    cout<<"left shift : "<<endl;
    int n,p;
    cout<<"Input x and p: ";
    cin>>n>>p;
    cout<<"x = "<<n<<" p = "<<p<<endl;
    cout<<"(x<<p) = "<<(n<<p)<<endl;//just like multiplying a number by some power of 2
}
void rightShift()
{
    cout<<"Right shift : "<<endl;
    int m,po;//just like dividing a number by some power of 2
    cout<<"Input x and p: ";
    cin>>m>>po;
    cout<<"x = "<<m<<" p = "<<po<<endl;
    cout<<"(x<<p) = "<<(m>>po)<<endl;
}
void signedBItmanipulation()
{
    signed char c = -74,pw=c>>2;
    //cin>>c>>pw;
    cout<<"working with signed bit : "<<endl;
    printf("x = %d\n",c);
    printf("(x>>2) : %d",pw);
}
void formulas()
{
    cout<<"\nbitwise or,and,x-or and not basic formula \nInput a variable to prove this : "<<endl;
    int x;
    cin>>x;
    cout<<"making evey bit (0) => x&1 = "<<(x&1)<<" x&0 = "<<(x&0)<<endl;
    cout<<"making every bit(1) => x|1 = "<<(x|1)<<" x|0 = "<<(x|0)<<endl;
    cout<<"inverting every bit => x^1 = "<<(x^1)<<" x^0 = "<<(x^0)<<endl;
}
void swapingWith2Var()
{
    int a,b;
    cout<<"Enter 2 variable to swap them without using 3rd variable :";/*just keep
                                                                          a = a^b
                                                                          b = a^b
                                                                          a = a^b*/
    cin>>a>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
void MOd_divide_multiply_by_powerOf2()
{
    //if 1st num : a and 2nd num : b = 2^p
    //(a%b) = a&(b-1)
    //(a*b) = a<<p
    //(a/b) = a>>p
    int a,p;
    cout<<"any 1st number and power of 2 as 2nd number [as 2nd num should be of power of 2] : ";
    cin>>a>>p;
    int s = pow(2,p);
    cout<<"1st num :"<<a<<" 2nd num : "<<s<<" power of 2nd num: "<<p<<endl;
    cout<<"a%b = "<<(a&(s-1))<<endl;
    cout<<"a*b = "<<(a<<p)<<endl;
    cout<<"a/b = "<<(a>>p)<<endl;
}
void masking()
{
    bitset<16>b1("100110110101001");
    cout<<"Enter L and r to mask from b1(0 start from left):";
    int l,r,d;
    cin>>l>>r;
    d = r-l+1;
    int x=0;
    for(int i=0; i<d; i++)
    {
        x=((x<<1)|1);
    }
    x = x<<l;
    bitset<16>b2(x);
    cout<<"b1->(From here we have to mask):"<<b1<<endl;
    cout<<"x =                             "<<b2<<endl;
    cout<<(b1&b2)<<endl;
}
int main()
{
    bitset<10000000>b;
    //cout<<b<<endl;
    //leftShift();
    //right();
    //signedBItmanipulation();
    //formulas();
    //checkingPowerOf2();
    //swapingWith2Var();
    //MOd_divide_multiply_by_powerOf2();
    //masking();
    return 0;
}
