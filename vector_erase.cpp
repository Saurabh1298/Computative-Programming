#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int size;
 vector<int> v;
 cin>>size;
 int n;
for(int i=0;i<size;i++)
{
 cin>>n;
 v.push_back(n);
}
int a;
cin>>a;
if( a < v.size() )
v.erase(v.begin()+ a-1);
int b,c;
cin >> b>>c;
if( b < c && c < v.size() )
v.erase(v.begin()+ b-1,v.begin()+ c-1);

cout << v.size()<<endl;
 for(auto i=v.begin();i!=v.end();i++)
    {
      cout << *i<<" ";
    }


    return 0;
}
