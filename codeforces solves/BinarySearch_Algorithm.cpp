#include<iostream>
#include<algorithm>
#include<iomanip>
#include<array>
#define ll long long
#define nl "\n"
#define sp " "
#define sort(arr) sort(arr, arr + n)
using namespace std;
int binarySearch(int arr[], int low, int high, int value)
{
    while(high >= low)
    {
        int mid = low + ((high - low)/2);
        if(arr[mid] == value)
        {
            return mid;
        }
        else if(arr[mid] < value)
        {
            low = mid + 1;
        }
        else if(arr[mid] > value)
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {14, 33, 27, 10, 35, 19,  42, 44};
    int value = 35;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr);
    int result = binarySearch(arr, 0, n - 1, value);
    if(result == -1)
    {
        cout << "The value is not valid\n";
    }
    else{
        cout  << result << nl;
    }
}