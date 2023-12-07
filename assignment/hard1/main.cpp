#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr={1,3,-1,-3,5,3,6,7};
    int window_size=3;
    int n=arr.size();
    queue<int> q;
    int i=0,j=0;
    int maxx=INT_MIN;
    vector<int> ans;
    while(j<n){
        while(!q.empty() and q.front()<arr[j]){
            q.pop();
        }
        q.push(arr[j]);
        if(j-i+1<window_size)
        j++;

        if(j-i+1==window_size)
        {
            ans.push_back(q.front());
            if(q.front()==arr[i]){
                q.pop();
            }
            i++;
            j++;
        }
    }

    cout << "Showing the maximum of all subarrays of size given as window size"<<endl;
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}

