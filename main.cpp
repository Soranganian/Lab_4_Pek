#include <iostream>

using namespace std;

string NameNum(int NameNum) {
    switch (NameNum) {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        case 0:
            return "Zero";
        default:
            return "Ya Invalid";
    }
} 

 int main()
 {
    //#1
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b && b>c) cout << a-b-c;
    else if(b>a && b%c==0) cout << b*(c+b-a);
    else
        cout << a+b+c;

    //#2
    int n;
    cin >> n;
    cout << NameNum(n);

    //#3
    int x;
    cin >> x;
    if (x==1) cout << "Positive number";
    else 
        cout << "Negative number";
    // тк х принимает ток 1 или -1, то просто if else или то или это

    return 0;
 }