#include <iostream>
using namespace std; 

int f(int x) {
    return x+1;
}
int g(int x) {
    return x*2;
}
int h(int x) {
    return x-3;
}

typedef int(*thug)(int); 
int main() {
    thug todo[3] = {f,g,h};
    int x=10;
    for(unsigned i=0;i < 3;i++) {
        x = todo[i](x);
    }
 
    cout << "x = " << x << endl; 
    return 0;
}