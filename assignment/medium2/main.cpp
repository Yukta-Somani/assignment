#include <bits/stdc++.h>
using namespace std;

void findMajorityfunc(int arr[], int size)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < size; i++)
        mp[arr[i]]++;
    int flag = 0;
    for(auto i : mp)
    {
        if(i.second > size / 3)
        {
            flag =1;
            cout << "element is : " << i.first << endl;
        }
    }
    if(flag == 0)
        cout << "No Majority element" << endl;
}

int main()
{
    int arr[] = { 2, 2, 3, 1, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMajorityfunc(arr, n);

    return 0;
}
