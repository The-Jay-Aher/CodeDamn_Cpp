#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n % 3 == 0 && n % 5 == 0){
        cout << "Fizz Buzz";
    }
    else if (n % 5 == 0)
    {
        cout << "Fizz";
    }
    else if (n % 3 == 0)
    {
        cout << "Buzz";
    }
    
    return 0;
}