#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p_array[3];
    p_array[0] = {1, 4};
    p_array[1] = {2, 5};
    p_array[2] = {3, 6};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << p_array[i].second << endl;
    }
}