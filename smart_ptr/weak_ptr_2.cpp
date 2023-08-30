#include <iostream>
#include <memory>
#include <string>
// side note: you can't use .methods on weak pointers, only shared or unique.
using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;

class Person
{
    private:
        string name;

    public:
        Person(){
            cout << "Constructing person " << endl;
        }

        Person(string n) :name(n) {
            cout << "Constructing person " << endl;
        }

        string get_name() { return name; }

        ~Person() {
            cout << "Destructing person " << endl;
        }
};

int main()
{
    shared_ptr<Person> nina_ptr {make_shared<Person>("Nina")};
    shared_ptr<Person> person_sp = nina_ptr;

    cout << "nina_ptr: " << nina_ptr->get_name() << endl;

    weak_ptr<Person> person_wp = nina_ptr;

        cout << "person_wp: " << person_wp->get_name() << endl;


    return 0;
}
