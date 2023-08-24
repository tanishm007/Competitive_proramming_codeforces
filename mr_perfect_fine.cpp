#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include<unordered_map>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<string,int> mp;

       mp["00"] = mp["11"] = mp["01"] = mp["10"] = (int)1e9;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            mp[s] = min(mp[s],x);
        }

        if(min(mp["11"], (mp["01"] + mp["10"])) > (int)1e6)
        cout<<"-1"<<endl;

        else
        {
            cout<<min(mp["11"],(mp["01"] + mp["10"]))<<endl;
        }
    


    }
    return 0;
}