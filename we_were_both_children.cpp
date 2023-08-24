#include <iostream>

#include<vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int main(){

int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        
        vector<int> arr(n);

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i] = x;
        }

        int ans = 0;

        vector<int> v(n+1);
        std::vector<int> ans(n+1);

        for(int i=0;i<n;i++)
        {
            v[arr[i]]++;
        }
     

        for(int i=1;i<=n;i++)
        {
           

            int j = i;

            while(j<=n)
            {
                ans[j] += v[i];
                j += i;
            }
        }
        int maxCount = 0;

        for (int i = 0; i < n; i++) {
           
            if(maxCount < ans[i])
            maxCount = ans[i];
        }

        cout<<p<<endl;


    }
return 0;
}