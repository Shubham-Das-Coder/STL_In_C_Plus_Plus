#include <bits/stdc++.h>

using namespace std;

namespace shubham
{
    int val = 50;
    int getVal()
    {
        return val * 10;
    }
}

int main()
{
    double val = 10.0;
    cout << val << endl;
    cout << shubham::val << endl;
    cout << shubham::getVal() << endl;
}