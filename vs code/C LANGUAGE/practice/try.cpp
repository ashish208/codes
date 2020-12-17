#include <iostream>

using namespace std;

int test(int arr[], int n, int r)
{
    int s = 0, e = n, m;

    for (; s < e; m = (s + e) / 2)
    {
        if (arr[m] == r)
            return m + 1;
        else if (arr[m] < r)
            s = m + 1;
        else if (arr[m] > r)
            e = m - 1;
        else
            return -1 ;
    }
    return 0 ;
}

int main()
{
    int a, b;

    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << test(arr, a, b);

    return 0;
}