#include <iostream>
#include <cstring>
using namespace std;

//way 1
void print_string1(char * s){
    for (int i = 0; i < strlen(s); i++) cout << s[i];
    cout << endl;
}

//way 2
void print_string2(char * s){
    while (*s) {
        cout << *s;
        s++;
    }
    cout << endl;
}

int main(){
	print_string1("Happy birthday!");        
	print_string2("Wednesday is hump day and let's get to work!");        
    return 0;
}
