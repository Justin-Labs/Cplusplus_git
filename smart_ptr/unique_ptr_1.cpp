#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;
using std::make_unique;

class Person{

    private:
        string name;
    
    public:
        Person() {
            cout << "Constructing person" << endl;
        }

        Person(string n) :name(n) {
            cout << "Constructing person " << name << endl;
        }

        string get_name() { return name; }

        ~Person() {
            cout << "Destructing person " << name << endl;
        }
};

int main()
{
    unique_ptr<Person> person_ptr {make_unique<Person>()};
    unique_ptr<Person> john_ptr {make_unique<Person>("John")};
    
    cout << "-------" << endl;
    cout << "Person's name: " << person_ptr->get_name() << endl;
    cout << "John's name: " << john_ptr->get_name() << endl;
    cout << "--------" << endl;

    return 0;
}