#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    short int a,b,c;
    start:
    cin >> a >> b >> c;
    if ((a<1)||(a>1000) || (b<1)||(b>1000) || (c<1)||(c>1000))
    {
        cout << "Please enter the integers 1 through 1000" << endl;
        goto start;
    }
    cout << a+b+c << endl;
    return 0;
}