#include <iostream>

using std::cout;
using std::endl;

#include "person.h"
#include "people.h"

int main() {
    People list(5);
    list.AddPerson("Joe");
    list.AddPerson("Anna");
    cout << list.ToString() << endl;

    People* another = new People(2);
    another->AddPerson("Jenny");
    another->AddPerson("Forest");
    another->AddPerson("Lt Dan");
    cout << another->ToString() << endl;
    delete another;
    return 0;
}
