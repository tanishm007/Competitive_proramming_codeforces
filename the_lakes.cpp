#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
using namespace std;



void dfs(vector<vector<int>> &v, int r, int c,int &volume)
{
   int n = v.size();
    int m = v[0].size();

    if (r < 0 || r >= n || c < 0 || c >= m || v[r][c] == 0) {
        return;
    }

    volume += v[r][c];
    v[r][c] = 0; // Mark cell as visited

    dfs(v, r + 1, c, volume);
    dfs(v, r - 1, c, volume);
    dfs(v, r, c + 1, volume);
    dfs(v, r, c - 1, volume);

}
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;

        cin>>n>>m;

        vector<vector<int>> v(n,vector<int>(m,0));

        vector<pair<int,int>> dir;

        dir.push_back({0,1});
        dir.push_back({1,0});
        dir.push_back({-1,0});
        dir.push_back({0,-1});

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                v[i][j] = x;
            }
        }
        int ans = 0;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                {
                    int vol = 0;
                    if(v[i][j] != 0)
                    dfs(v,i,j,vol);
                    ans = max(ans,vol);
                }
        cout<<ans<<endl;
    }
return 0;
}