#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int low = 0, high = 9, val = 11, operation = 0, mid;
    bool isFound = false;
    while(low <= high && isFound == false)
    {
        mid = (low+high)/2;
        operation++;
        if(a[mid] == val)
           isFound = true;
        else if(a[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(isFound == true)
        printf("%d is at %d\n",val,mid);
    else
        printf("%d not found\n",val);
    printf("Operation count: %d\n", operation);
    return 0;
}
