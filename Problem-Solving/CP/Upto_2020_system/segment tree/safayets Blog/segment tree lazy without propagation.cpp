//not acc
#include<bits/stdc++.h>
using namespace std;
#define i64 long long int//lld
#define ui64 unsigned long long int//llu
#define FN(i,s,e) for(int i=s ; i<e ; i++)//normal loop
#define FR(i,s,e) for(int i=s ; i>=e ; i--) //reverse loop
#define IN scanf
#define OUT printf
#define RT return
#define pb push_back
#define mp make_pair
#define EPS 0.000000001//10^(-9)
#define BIG 10000007
//for geometrical
#define pi acos(-1.00)
#define rad pi/180.00
#define deg 180.00/pi

#define mx 100000
int a[mx];//where i am saving the elements
pair<int,int>tree[3*mx];//tree[node].first = sum    and tree[node].second = propagated value(which is to add to the every element of that sub tree)
                                             //here the size of the tree is 3*mx(actually 2*[2log n]-1)

void ini(int node,int b,int e)//log(n)
{
    if(b==e)//condition for leaf node
    {
        tree[node].first=a[b];//at the leaf node I'm putting directly the array element
        RT ;
    }

    int left = 2*node;
    int right = (2*node)+1;
    int middle =  (b+e)/2;
    ini(left,b,middle);
    ini(right,middle+1,e);
    tree[node].first=tree[left].first+tree[right].first;//for the sum of the leaf nodes using tree[node].first
}
void updateOne(int node, int b, int e, int i, int valToUp) // O : log(n)
{
    if(i>e || i<b)
        RT ;
    if(i <= b && i >= e)
    {
        tree[node].first = valToUp;
        RT ;
    }
    int left = 2*node;
    int right = (2*node)+1;
    int mid =  (b+e)/2;

    updateOne(left, b, mid, i, valToUp);
    updateOne(right, mid+1, e, i, valToUp);
    tree[node].first = tree[left].first + tree[right].first;

}
void updateInRange(int node, int b, int e, int i, int j, int valToUp) //O : log(n)
{
    if(i>e || j<b)
        RT ;
    if(i<=b && j>=e)
    {
        tree[node].first += ((e-b+1)*valToUp);/*if the node's range is relevant I'm just adding the multiplied value
                                                                               of all the elements in that node's range and the value to update(valToUp)
                                                                               actually its the lazy propagation(without traversing the leaf nodes of the relevant parent node)*/

        tree[node].second += valToUp;/*storing the propagated value which have to be added latter if we bring any of the leaf nodes
                                                                   the time of next update*/
        RT ;
    }
    int left = (2*node);
    int right = (2*node)+1;
    int mid = (b+e)/2;

    updateInRange(left, b, mid, i, j, valToUp);
    updateInRange(right, mid+1, e, i, j, valToUp);
    tree[node].first = tree[left].first + tree[right].first +   (e-b+1)*tree[node].second;
                /*here (e-b+1)*tree[node].second is added with the
                   sum of the left and right leaf node of the parent node
                   because  tree[node].second is the propagated value
                   which was to add with all its leaf nodes
                   so here may have confusion
                   though I've done the addition of the propagated value
                   with the leaf elements when the range is relevant
                   then why I'm doing again the same thing here!!!
                   but you have to notice that in relevant node i was adding
                   the propagated value of the leaf nodes
                   and here I'm adding the propagated value of the parent node not the leaf node!!!
                   with an example it may be clear:
                   like fighting with all the chunopudhi(propagated value of the leafs) and
                   vaging with the nayika(query sum).....
                   you must have to face the godfather(propagated value of the parent node)
                   of those villain and fight with him inevitably (-,-)
                   and that was stored in .second */

}
int query(int node, int b, int e, int i, int j, int carry =0)
{
    if(i>e || j<b)
        RT 0;
    if(i<=b && j>=e)
    {
        RT tree[node].first+((b-e+1)*carry);/*returning the sum adding with
                                                                            all the added propagated value with
                                                                             all the leaf nodes under the parent nodes*/
    }
    int left = (2*node);
    int right = (2*node)+1;
    int mid = (b+e)/2;
    carry = carry+tree[node].second;/*carry(a variable to store all the propagated values of the parent nodes of a node):
                                                                   if previously called node is irrelevant and when we
                                                                   are diving the present parent node we are adding the
                                                                   propagated value with the carry(which was initially  0)*/

    int p1 = query(left, b, mid, i, j, carry);//if this left node is relevant we should add the carry of the node  to find the query

    int p2 = query(right, mid+1, e, i, j, carry);//if this left node is relevant we should add the carry of the node  to find the query

    RT p1+p2;
}
int main()
{
    int n;
    IN("%d",&n);
    FN(i,1,n+1) IN("%d",&a[i]);
    ini(1,1,n);
    OUT("Initially : \n");
    FN(i,1,(3*n)+1) OUT("%d ",tree[i]);
    OUT("\n");
    while(1)
    {
        cout<<"1.query\n2.update(1 element)\n3.update(in range)\n4.see the present tree\n5.exit\n";
        int option;
        cin>>option;
        if(option == 1)
        {
            int l,u;
            OUT("Insert  the range in which you want the sum(inclusive) : ");
            IN("%d %d",&l, &u);
            int ans = query(1, 1, n, l, u);
            OUT("%d\n",ans);
        }
        else if(option == 2)
        {
            OUT("Enter the index and value : ");
            int in,x;
            IN("%d %d",&in, &x);
            updateOne(1, 1, n, in, x);
        }
        else if(option == 3)
        {
            OUT("Enter the lower and upper limit to update all in range : ");
            int l,u;
            IN("%d %d",&l, &u);
            OUT("Enter the value to add : ");
            int x;
            IN("%d",&x);
            updateInRange(1, 1, n, l, u, x);
        }
        else if(option == 4)
        {
            OUT("all the first : \n");
            FN(i,1,(3*n)+1)
                OUT("%d ",tree[i].first);
            OUT("\n");
            OUT("all the second: \n");
            FN(i,1,(3*n)+1)
                OUT("%d ",tree[i].second);
            OUT("\n");
        }
        else
            break;
    }
    RT 0;
}
