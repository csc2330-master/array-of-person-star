//
// Created by Carlos R. Arias on 11/2/22.
//

#include "person.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Person::Person(const string &name, unsigned int age): _name(name), _age(age) {

}

string Person::GetName() const {
    return _name;
}

unsigned int Person::GetAge() const {
    return _age;
}

void Person::Birthday() {
    _age++;
}

string Person::ToString() const {
    stringstream ss;
    ss << _name << " " << _age;
    return ss.str();
}
