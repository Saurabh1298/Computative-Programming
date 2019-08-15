#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
int count;
set<int> ss;
cin >> count;
for (int i=0; i<count; ++i){
    int type, query;
    cin >> type >> query;
    switch (type){
        case 1:
            ss.insert(query);
            break;
        case 2:
            ss.erase(query);
            break;
        case 3:
            cout << (ss.find(query) == ss.end() ? "No" : "Yes") << endl;
            break;
    }
}
return 0;
}
