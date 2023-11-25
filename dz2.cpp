/*

//¹1
#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cout << "X = ";
    cin >> x;
    cout << endl << "Y = ";
    cin >> y;
    cout << endl << "Z = ";
    cin >> z;
    cout << endl;
    if (x % 2 == 1 and y % 2 == 1) {
        cout << "condition is true";
    }
    else {
        cout << "condition is false";
    }

    cout << endl;
    if ((x < 20 and y < 20) or (x > 20 and y > 20)) {
        cout << "condition is false";
    }
    else {
        cout << "condition is true";
    }

    cout << endl;
    if (x == 0 or y == 0) {
        cout << "condition is true";
    }
    else {
        cout << "condition is false";
    }

    cout << endl;
    if (x < 0 and y < 0 and z < 0) {
        cout << "condition is true";
    }
    else {
        cout << "condition is false";
    }

    cout << endl;
    if ((x % 5 == 0 and y % 5 == 0) or (x % 5 == 0 and z % 5 == 0) or (y % 5 == 0 and z % 5 == 0) or (x % 5 != 0 and y % 5 != 0 and z % 5 != 0)) {
        cout << "condition is false";
    }
    else {
        cout << "condition is true";
    }

    cout << endl;
    if (x > 100 or y > 100 or z > 100) {
        cout << "condition is true";
    }
    else {
        cout << "condition is false";
    }
}



//¹2

#include <iostream>

using namespace std;

int main() {
    using byte = signed char;

    pair <byte, byte> positionA;
    cin >> positionA.first >> positionA.second;

    pair <byte, byte> positionB;
    cin >> positionB.first >> positionB.second;

    // 
    if ((positionA.first < '0' or positionB.first < '0' or positionA.second < '0' or positionB.second < '0') or (positionA.first==positionB.first and positionA.second==positionB.second)){
        cout << "Neprav vvod";
        return 0;
    }

    cout << "T1: ";
    if ((positionA.first == positionB.first) or (positionA.second == positionB.second)) {
        cout << "Da" << endl;
    }
    else {
        cout << "Ne" << endl;
    }

    cout << "T2: ";
    if ((positionA.first - positionB.first) == (positionA.second - positionB.second)) {
        cout << "Da" << endl;
    }
    else {
        cout << "Ne" << endl;
    }
    cout << "T3: ";
    if ((positionA.first - positionB.first == 1 or positionA.first - positionB.first == 0 or positionA.first - positionB.first == -1) and (positionA.second - positionB.second == 1 or positionA.second - positionB.second == 0 or positionA.second - positionB.second == -1)) {
        cout << "Da" << endl;
    }
    else {
        cout << "Ne" << endl;
    }
    cout << "T4: ";
    if (((positionA.first == positionB.first) or (positionA.second == positionB.second)) or ((positionA.first - positionB.first) == (positionA.second - positionB.second))) {
        cout << "Da" << endl;
    }
    else {
        cout << "Ne" << endl;
    }
    cout << "T5: ";
    if (abs(positionA.first - positionB.first) == 1 and positionB.second - positionA.second == 1) {
        cout << "Da";
    }
    else {
        cout << "Ne";
    }
}

//¹3

#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=1; i<9; i++){
        cout<<i<<" * "<<7<<" = "<<i*7<<endl;
    }
    cout<<endl;
    for(int i=1; i<9; i++){
        cout<<i<<" * "<<a<<" = "<<i*a<<endl;
    }
}




//¹4
#include <iostream>

using namespace std;

int main(){
    int a, b;
    long long x=1;

    for (int i=8; i<16; i++){
        x=x*i;
    }
    cout<<x<<endl;

    cout<<"à = ";
    cin>>a;
    cout<<endl<<"b = ";
    cin>>b;

    x=1;
    for (int i=a; i<21; i++){
      x=x*i;
    }
    cout<<endl<<x;

    x=1;
    for (int i=1; i<b+1; i++){
      x=x*i;
    }
    cout<<endl<<x;

    x=1;
    for (int i=a; i<b+1; i++){
      x=x*i;
    }
    cout<<endl<<x;
}



if ((str[i] == 'c' or str[i] == 'C') and str[i + 1] == 'a' and str[i + 2] == 'n' and (str[i + 3] == ' ' or str[i + 3] == '?')) {
            for (int j = i; j < i + 3; j++) {
                auto iter = str.cbegin();
                str.erase(iter+j+1)
            }
        }

auto iter = nstr.cbegin();
            //nstr.insert(iter + i-1, sl.begin(), sl.begin() + 2);
            i = i + 2;
*/