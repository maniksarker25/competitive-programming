#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n;
    cin >> n;
   
    set<string>names;

    for(int i = 0;i<n;i++){
        string name;
        cin >> name;
        if(names.find(name) != names.end()){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO" <<endl;
            names.insert(name);
        }
    }
    return 0;
}