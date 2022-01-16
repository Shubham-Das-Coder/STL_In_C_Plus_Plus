#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    vector<int> v1 = v;
    printVector(v1);
}