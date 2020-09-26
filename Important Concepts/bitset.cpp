#include<bits/stdc++.h>
using namespace std;

int main() {

    bitset<10> b;
    b[1] = 1;
    b[5] = 1;

    //Displaying Elements of bitset
    //for (int i = 0; i < 10; i++)
    //    cout << b[i] << endl;


    //binary string  RIGHT TO LEFT   i.e. LSB = 0, MSB = 9
    /*bitset <10> s (string("0010110110"));
    for (int i = 0; i < 10; i++)
        cout << s[i] << endl;
    */

   bitset<10> a (string("0010110110"));
   bitset<10> c (string("1011011000"));

   cout << (a & c) << endl; //0010010000
   cout << (a | c) << endl; //1011111110
   cout << (a ^ c) << endl; //1001101110
    return 0;
}