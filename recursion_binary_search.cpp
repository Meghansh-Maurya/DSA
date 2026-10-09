#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int const target, int low, int high)
{
    if(low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binary_search(arr, target, low, mid - 1);
    return binary_search(arr, target, mid + 1, high);
}

int main()
{
    vector<int> arr = {1, 23, 45, 65, 79, 80, 85, 95, 99, 100, 1005, 1110};

    cout << binary_search(arr, 85, 0, arr.size() - 1);

    return 0;
}
