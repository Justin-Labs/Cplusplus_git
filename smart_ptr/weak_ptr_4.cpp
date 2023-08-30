#include <iostream>
#include <memory>
#include <string>
// example building up to next example.
// side note: if no constructor in code, compiler will insert defualt constructor.
using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;

struct Company;

struct Person {
    string name;
    shared_ptr<Company> company_ptr;

    ~Person() {
        cout << "Destructing person" << name << endl;
    }
};

struct Company {
    string name;
    shared_ptr<Person> person_ptr;

    ~Company() {
        cout << "Destructing company " << name << endl;
    }
};

int main()
{
    shared_ptr<Person> nina_ptr {make_shared<Person>("Nina")};
    nina_ptr->name = "Nina";

    shared_ptr<Company> company_ptr {make_shared<Company>()};
    company_ptr->name = "Microsoft";

    return 0;
}