#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, string> p;
    p = {19, "Shubham"};
    pair<int, string> p1 = p;
    p1.first = 20;
    p1.second = "Das";
    cout << p.first << endl;
    cout << p.second << endl;
}