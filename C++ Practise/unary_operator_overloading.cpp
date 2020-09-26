#include <iostream>
#include <cstring>
using namespace std;

class Mystring {
    char* str;

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

        //- operator for lowercase 
        Mystring operator-() const {
            cout << "- operator called" << endl;
            char *buff = new char [strlen(this->str) + 1];
            strcpy(buff, this->str);
            for (int i = 0; i < strlen(buff); i++)
                buff[i] = tolower(buff[i]);
            Mystring temp {buff};
            delete [] buff;
            return temp;
        }

        //display Function 

        void display() {
            cout << " The current string is: " << str << " : " << strlen(str) << endl;
        }
};

int main() {
    
    Mystring a {"Hello"};

    a.display();
    Mystring b;
    b = -a;
    b.display();
    b = "This is test";
    b.display();

    return 0;
}