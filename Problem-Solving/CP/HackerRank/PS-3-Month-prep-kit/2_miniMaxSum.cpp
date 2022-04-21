//acc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[5];
    for(int i = 0; i<5; i++) scanf("%lld",&arr[i]);

    sort(arr,arr+5);

    long long int miniSum = 0 , maxSum = 0;
    for(int i = 0; i<4; i++) miniSum += arr[i];

    for(int i = 1; i<5; i++) maxSum += arr[i];

    printf("%lld %lld\n",miniSum, maxSum);
    return 0;
}
