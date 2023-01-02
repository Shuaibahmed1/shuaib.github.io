#include <iostream>
using namespace std;

void swap (int a, int b){
int temp = b;
b=a;
a = b;
}

int main () {
cout << endl;
int a = 5, b = 10;
swap(a,b)
cout << a <<" " << b << endl;
return 0;
}
