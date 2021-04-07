#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[] = "Hello";

    //way 1
    for (int i = 0; i < strlen(a); i++) cout << a[i];
    cout << endl;
    
    //way 2
    int j = 0;
    while (a[j] != '\0') {
        cout << a[j];
        j++;
    }
    cout << endl;

    return 0;
}
