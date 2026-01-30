#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;
    
    for(int i=0; i<count; i+=4) {
        cout << "long ";
    }
    cout << "int" << endl;
}