#include <iostream>

using namespace std;

#include "String.h"

int main() {
    String string1("This is code for C++."), string2, string3("Interesting!!!"), string4("NineDollar");
    String string, string5;
    string2 = string1;
    string2.show();
    string = string1 + string3;
    string.show();
    string5 = string - string1;
    string5.show();
    String s6 = "C++ programming! ";
    if (s6.IsIn('g') != nullptr) {
        cout << "g in s6 Yes!!!" << endl;
    } else {
        cout << "g in s6 No!!!" << endl;
    }
    if (s6.IsIn('k') == nullptr) {
        cout << "k in s6 No!!!" << endl;
    } else {
        cout << "k in s6 Yes!!!" << endl;
    }
    if (s6.IsSubStr("prog")) {
        cout << "prog in s6 Yes!" << endl;
    } else {
        cout << "prog in s6 No!" << endl;
    }
    if (!s6.IsSubStr("red")) {
        cout << "red in s6 No!" << endl;
    } else {
        cout << "red in s6 Yes!" << endl;
    }
    cout << "string1 = ";
    string1.show();
    cout << "string3 = ";
    string3.show();
    if (string1 > string3) {
        cout << "string1 > string3" << endl;
    } else if (string1 < string3) {
        cout << "string1 < string3" << endl;
    } else if (string1 == string3) {
        cout << "string1 = string3" << endl;
    }
    const char *sp1,*sp3;
    sp1 = string1;
    sp3 = string3;
    cout << sp3 << sp1 << endl;
    cout << string3.GetString()<<endl;
    return 0;
}
