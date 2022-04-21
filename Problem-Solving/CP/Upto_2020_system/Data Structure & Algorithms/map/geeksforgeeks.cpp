#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
void intintMap()
{
    map<int,int>mInt;
    for(int i=0; i<10; i++)
    {
        mInt.insert(MP(i,i*i));
    }
    cout<<"Initially : "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<mInt.find(i)->second<<endl;//.find(k) return a iterator to the 'k' th key position
        // working with find() to print the elements is not always good....next commented part with
        //find() is not working properly,reason didn't query -_-
    }

    cout<<"after mInt.erase(mInt.begin(),mInt.find(2)) : "<<endl;
    mInt.erase(mInt.begin(),mInt.find(2));//erase function is like "[)"
    for(auto it = mInt.begin() ; it!=mInt.end() ; it++)
    {
        cout<<it->second<<endl;
    }

    map<int,int>mInt2(mInt.begin(),mInt.end());//its like "[]"
    cout<<"map<int,int>mInt2(mInt.begin(),mInt.end()) && mInt2.erase(mInt2.find(5),mInt2.end()) : "<<endl;
    mInt2.erase(mInt2.find(5),mInt2.end());
    for(auto it = mInt2.begin() ; it!=mInt2.end() ; it++)
    {
        cout<<it->second<<endl;
    }
}
void charpairstringstringMap()
{
    cout<<"New : "<<endl;
    map<char,pair<string,string>>m1;
    m1.insert(MP('r',MP("s","@")));
    m1.insert(MP('s',MP("s","s")));
    m1.insert(MP('p',MP("pq","p")));
    m1.insert(MP('q',MP("r","r")));
    cout<<"Initially the new : "<<endl;
    for(auto it= m1.begin(); it!=m1.end() ; it++)
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;

    //m1.erase('q');//erase with key
    cout<<"m1.erase('q') : "<<endl;
    for(auto it= m1.begin(); it!=m1.end() ; it++)
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;

    m1.insert(MP('q',MP("r","r")));
    cout<<"then m1.insert(MP('q',MP(\"r\",\"r\"))) : "<<endl;//then m1.insert(MP('q',MP(\"r\",\"r\")))
    for(auto it= m1.begin(); it!=m1.end() ; it++)
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;

    map<char,pair<string,string>>m2(m1.begin(),m1.end());
    cout<<"Inserting m1 to m2 (map<char,pair<string,string>>m2(m1.begin(),m1.end())"<<endl;//Inserting m1 to m2
                                                                                //(map<char,pair<string,string>>m2(m1.begin(),m1.end())
    for(auto it= m2.begin(); it!=m2.end() ; it++)
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;

    map<char,pair<string,string>>::iterator itr;
    itr = m2.find('r');
    m2.erase(itr,m2.end());
    cout<<"After itr = m2.find('r') && m2.erase(itr,m2.end()):"<<endl;
    for(auto it= m2.begin(); it!=m2.end() ; it++)
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
}
void charstringMap()
{
    map<char,string>mcs;
    mcs['a']="tareq";//this [] operator is actually used to assign a new element
    //to the map(existing/not existing) if the key is not existing
    //the size of the map is increased by one and the pair is inserted
    //otherwise the existing key_value is updated
    mcs['b']="toki";
    mcs['c']="toba";
    mcs['d']="abbu";
    mcs['e']="ammu";
    cout<<"Initially : "<<endl;
    for(auto it= mcs.cbegin() ; it!=mcs.end() ; it++)
    {
        cout<<it->second<<endl;
    }
    for(char c='a'; c<'g'; c++)/*Searches the container for elements
                                with a key equivalent to k and returns the number of matches.
                                Because all elements in a map container are unique,
                                the function can only return 1 (if the element is found) or zero (otherwise).*/
    {
        if(mcs.count(c)>0)
            cout<<c<<":  is in the map"<<endl;
        else
            cout<<c<<" : is not in the map"<<endl;
    }
    mcs.clear();
    mcs['a']="boxod";
    mcs['b']="arek bolod";//this at(k) function is likely the same as [] operator
    //but if 'k' th key is not existing in the map then  there will show an
    //error(terminate called after throwing an instance of 'std::out_of_range' what():  map::at)
    //unlikely [] operator
    cout<<"After mcs.clear && mcs['a']=\"boxod\" && mcs.at('b')=\"arek bolod\";"<<endl;
    for(auto it= mcs.cbegin() ; it!=mcs.end() ; it++)/*.end() :Returns an iterator referring to the past-the-end element in the map container.
                                                     The past-the-end element is the theoretical element that would follow the last element
                                                      in the map container.
                                                      It does not point to any element,
                                                      and thus shall not be dereferenced.
                                                      If the container is empty, this function returns the same as map::begin.*/
    {
        cout<<it->second<<endl;
    }

}
void insertion()
{
    map<int,int>m1;
    m1.insert(MP(0,100));

    auto i = m1.end();
    m1.insert(i,MP(1,100));//insertion using hint iterator
    //Hint for the position where the element can be inserted.
    //and if the key is not unique it returns the position
    //else return nothing.....
    m1.insert(i,MP(4,100));
    m1.insert(MP(1,200));
    cout<<"for duplicate (1,200) with hint "<<i->first<<" "<<i->second<<endl;
    for(i = m1.begin() ; i!=m1.end() ; i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<"printing with the help of erase() and empty() :"<<endl;
    while(!m1.empty())
    {
        cout<<m1.begin()->first<<" "<<m1.begin()->second<<endl;
        m1.erase(m1.begin());
    }
    cout<<"inserting with emplace && printing with  for(auto& i:M): "<<endl;/*inserting with emplace && printing with  for(auto& i:M):*/
    //most time_saving and easy!!!
    map<int,int>M;
    M.emplace(10,20);
    M.emplace(10,200);
    cout<<"M : "<<endl;
    for(auto& i:M)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"emplace_hint : "<<endl;
    map<int,int>M1;
    auto itr = M1.end();
    itr = M1.emplace_hint(itr,1,0);
    M1.emplace_hint(itr,2,9);
    itr=M1.emplace_hint(itr,2,100);/*using this emplace_hint: If the function successfully inserts the element
                                    (because no equivalent element existed already in the map),
                                    the function returns an iterator to the newly inserted element.
                                    Otherwise, it returns an iterator to the equivalent element within the container.*/


    //here is the difference between emplace_hint & insertion with hint:
    //insertion with hint returns the position if insertion is not successful(-v-)
    //on the contrary, emplace_hint returns iterator if insertion is successful (-,-)
    cout<<"M2 : "<<endl;
    for(auto&i : M1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //cout<<itr->first<<" "<<itr->second<<endl;
    M1.swap(M);
    cout<<"After M1.swap(M) :"<<endl;
    cout<<"M1 :"<<endl;
    for(auto&i : M1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"M :"<<endl;
    for(auto&i : M)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    M.emplace(100,0);
    M.emplace(2,1);
    M.emplace(4,3);
    M.emplace(10,30);
    cout<<"M after those emplacement :"<<endl;
    for(auto&i : M)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto il = M.lower_bound(100);/* lower_bound, has the same behavior as upper_bound, except
                                  in the case that the map contains an element with a key equivalent
                                   to k: In this case lower_bound returns an iterator
                                   pointing to that element,
                                   whereas upper_bound returns an iterator pointing to the next element.*/
    cout<<"M.lower_bound(1) => "<<il->first<<" "<<il->second<<endl;
    auto ih = M.upper_bound(1);//Returns an iterator pointing to the first element in the container whose key is considered to go after k.
    cout<<"M.upper_bound(1) => "<<ih->first<<" "<<ih->second<<endl;
}
int main()
{
    //intintMap();
    //charpairstringstringMap();
    //charstringMap();
    insertion();
    return 0;
}
