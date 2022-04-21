#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two values to see the bitwise operations :";
    cin>>a>>b;
    printf("%d & %d = %d\n",a,b,(a&b));
    printf("%d | %d = %d\n",a,b,(a|b));
    printf("%d ^ %d = %d\n",a,b,(a^b));
    printf("signed int: ~%d= %d\n",a,(~a));
    cout<<"Enter a value as unsigned int to see the not operation in unsigned int:";
    unsigned int ui;
    cin>>ui;
    cout<<"unsigned int: ~"<<ui<<" = "<<(~ui)<<endl;
    cout<<"Enter num and L, num=number, L = how many bits for left shift:";
    int num,L,R;

    cin>>num>>L;
    bitset<32>b1(num);
    printf("%d<<%d = %d || (same as %d*2^%d)",num,L,(num<<L),num,L);
    cout<<"Bit representation of "<<num<<": "<<b1<<endl;
    bitset<32>b2(num<<L);
    cout<<"Bit representation of ("<<num<<"<<"<<L<<") : "<<b2<<endl;

    cout<<"Enter num and R, num=number, R = how many bits for right shift:";
    cin>>num>>R;
    bitset<32>b3(num);
    printf("%d>>%d = %d || (same as %d/(2^%d)",num,R,(num>>R),num,R);
    cout<<"Bit representation of ("<<num<<"<<"<<R<<") : "<<b3<<endl;
    bitset<32>b4(num>>R);
    cout<<"Bit representation of ("<<num<<">>"<<R<<") : "<<b4<<endl;
    //===================== some application of bitwise operation =====================//
    //---------------------checking whether a number is power of 2 or not ------------------//
    printf("Enter a number to check whether it is power of 2 or not: ");
    cin>>num;
    printf("%d & %d = %d || (if %d&%d == 0 then yes)\n",num,num-1,(num&(num-1)),num,num-1);

    //--------------------Swap two integers without using any third variable --------------//
    int n1,n2;
    printf("Enter 2 values to swap two integers without using any third variable:");
    cin>>n1>>n2;
    printf("Before : n1 = %d || n2 = %d\n",n1,n2);
    n1 = n1 ^ n2;
    printf("(n1 = n1 ^ n2)\n");
    n2 = n1 ^ n2;
    printf("(n2 = n1 ^ n2)\n");
    n1 = n1 ^ n2;
    printf("(n1 = n1 ^ n2)\n");
    printf("after : n1 = %d || n2 = %d\n",n1,n2);

    //---------------------------Divisibility by power of 2---------------------------------//
    printf("Enter two values to check the Divisibility by power of 2:");
    cin>>n1>>n2;
    printf("n1(number) = %d  || n2(power of two) = %d\n",n1,n2);
    printf("%d & %d = %d || (if divisible then the ans will be 0)",n1,n2,(n1&(n2-1)));


    return 0;
}
