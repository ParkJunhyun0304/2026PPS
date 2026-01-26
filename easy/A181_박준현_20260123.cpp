#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b,num=1,sum=0;

    cin >> a >> b;

    while(b>0) {
        cout << a*(b%10) << endl;
        sum += a*(b%10)*num;
        b = b/10;
        num *=10;
    }
    cout << sum << endl;
}