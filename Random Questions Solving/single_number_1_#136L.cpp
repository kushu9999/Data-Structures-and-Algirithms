#include<bits/stdc++.h>
using namespace std;
int main()
{
    // method 1 XOR :- Time O(n),Space O(1)
    vector<int>v={1,2,1,2,4};
    
    int ans=0;
    for(auto i:v)
    {
        ans ^= i;
    }
    cout<<ans;
    
    
    return 0;
}
/*
method 2 HashMap :- Time O(n),Space O(n)

use hashmap & store values
check if that element already avaialable in hashmap 
then remove that value else add in it

unordered_set<int> us ;
auto ptr = v.begin();
for(auto i:v)
{
    if( us.find(i)==us.end() )
    {
        us.insert(i);
    }
    else
    {
        us.erase(i);
    }  
}
for(auto i:us)
{
    cout<<i<<" ";
}
*/
