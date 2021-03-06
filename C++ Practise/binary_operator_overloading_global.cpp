#include <iostream>
#include <cstring>
using namespace std;

class Mystring {
    char* str;
    friend Mystring operator+ (const Mystring &lhs, const Mystring &rhs);
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    public:
        //No-arg Constructor
        Mystring() : str {nullptr} {
            cout << "No arg constructor callled" << endl;
            str = new char[1];
            *str = '\0';
        }

        //Overloaded Constructor
        Mystring (char* str) : str {nullptr} {
            cout << "Overloaded Construtor called" << endl;
            if (str == nullptr) {
                str = new char[1];
                *str = '\0';
            } else {
                this->str = new char[strlen(str) + 1];
                strcpy(this->str, str);
            }
        }

        //Copy Constructor
        Mystring (const Mystring &source) : str {nullptr} {
            cout << "Copy Constructor called" << endl;
            this->str = new char [strlen(source.str) + 1];
            strcpy(this->str, str);
        }

        Mystring (Mystring &&source) : str {source.str} {
            cout << "Move Constructor called" << endl;
            source.str = nullptr;
        }
        

        //Assignment operator copy
        Mystring &operator= (const Mystring &rhs) {
            cout << "Copy Assignment" << endl;
            if (this == &rhs)
                return *this;
            delete [] this->str;
            this->str = new char [strlen(rhs.str) + 1];
            strcpy(this->str, rhs.str);
            return *this;
        }


        //Aissgnment Operator Move
        Mystring &operator= (Mystring &&rhs) {
            cout << "Move Assignment" << endl;
            if (this == &rhs)
                return *this;
            delete [] str;
            this->str = rhs.str;
            rhs.str = nullptr;

            return *this;
        }

        //display Function 

        void display() {
            cout << " The current string is: " << str << " : " << strlen(str) << endl;
        }
};


//+ operator for concatenation
        Mystring operator+ (const Mystring &lhs, const Mystring &rhs) {
            cout << "+ operator called" << endl;
            char *buff = new char [strlen(lhs.str) + strlen(rhs.str) + 1];
            strcpy(buff, lhs.str);
            strcat(buff, rhs.str);
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }

        //== operator for comparison
        bool operator==(const Mystring &lhs, const Mystring &rhs) {
            if (strcmp(lhs.str, rhs.str) == 0)
                return true;
            else
                return false;
        }

int main() {
    
    Mystring a {"Hello"};
    a.display();
    Mystring b {"World"};
    b.display();
    Mystring c;
    c = a + " " + b;
    c.display();
    Mystring d {"Hello World"};
    cout << "a == b" << (a == b) << endl;
    cout << "b == c" << (b == c) << endl;
    cout << " c == d " << (c == d) << endl;
    return 0;
}