#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        unordered_map<int,int> mp;
        int n,m;
        cin>>n>>m;
        vector<int> adj[n+1];

        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            int y;
            cin>>y;

            adj[x].push_back(y);
            adj[y].push_back(x);

        }

        int cnt = 0;
        int ele;

        for(int i=0;i<=n;i++)
        {
            if(adj[i].size() == 1 )
             {
                mp[adj[i][0]]++;
                if(adj[i][0] !=0)
                ele = adj[i][0];
             }
        }

        cout<<mp.size()<<" "<<mp[ele]<<endl;

    }
return 0;
}