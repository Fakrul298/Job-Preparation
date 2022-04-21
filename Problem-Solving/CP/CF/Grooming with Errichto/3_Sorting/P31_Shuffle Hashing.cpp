#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        int ls, hs, left = -1, right = -1;
        string s,h;
        cin>>s>>h;
        ls = s.size(), hs = h.size();
        for(int i = 0; i<hs; i++)
        {
            for(int j = 0; j<ls; j++)
            {
                if(h[i] == s[j])
                {
                    left = i;
                    break;
                }
            }
            if(left != -1)
                break;
        }

        for(int i = hs-1; i>=0; i--)
        {
            for(int j = ls-1; j>=0; j--)
            {
                if(h[i] == s[j])
                {
                    right = i;
                    break;
                }
            }
            if(right != -1)
                break;
        }
        printf("ls = %d || right = %d, left = %d || diff = %d\n",ls,right,left, (right-left)+1);
        if((right - left) + 1 == ls)
        {
            map<char,int>freq1,freq2;

            char c;
            int cnt = 0;
            auto it1 = freq1.begin();
            for(int i = 0; i<ls; i++)
            {
                c = s[i];
                it1 = freq1.find(c);
                if(it1 == freq1.end())
                {
                    freq1.insert(make_pair(c,1));
                }
                else
                {
                    cnt = it1->second;
                    cnt++;
                    it1->second = cnt;
                }
            }

            auto it2 = freq2.begin();
            for(int i = left; i<=right; i++)
            {
                c = h[i];
                it2 = freq2.find(c);
                if(it2 == freq2.end())
                {
                    freq2.insert(make_pair(c,1));
                }
                else
                {
                    cnt = it2->second;
                    cnt++;
                    it2->second = cnt;
                }
            }

            /*for(auto i = freq1.begin(); i != freq1.end(); i++)
            {
                cout<<i->first<<" "<<i->second<<"\n";
            }
            cout<<endl<<endl;

            for(auto i = freq1.begin(); i != freq1.end(); i++)
            {
                cout<<i->first<<" "<<i->second<<"\n";
            }
            cout<<endl<<endl;*/
            //cout<<freq1.size()<<" "<<freq2.size()<<endl;
            if(freq1.size() == freq2.size())
            {
                int yes = 1;
                for(auto i = freq1.begin(), j = freq2.begin(); i != freq1.end(); i++,j++)
                {
                    //cout<<i->first<<":"<<j->first<<" || "<<i->second<<":"<<j->second<<endl;
                    if((i->first != j->first) || (i->second != j->second))
                    {
                        yes = 0;
                        break;
                    }

                }
                if(yes == 1)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");

        }
        else
            printf("NO\n");

    }
    return 0;
}
