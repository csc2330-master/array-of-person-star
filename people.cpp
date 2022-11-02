//
// Created by Carlos R. Arias on 11/2/22.
//

#include "people.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

People::People(): _size(0) {
    for (int i = 0; i < MAX; ++i) {
        _data[i] = nullptr;
    }
}

bool People::AddPerson(const Person &person) {
    if (_size == MAX)
        return false;
    _data[_size++] = new Person(person);
    return true;
}

bool People::AddPerson(const string &name, unsigned int age) {
    Person tmp(name, age);
    return AddPerson(tmp);
}

const Person *People::Get(unsigned int index) const {
    if (index >= _size)
        return nullptr;
    else
        return _data[index];
}

unsigned int People::Size() const {
    return _size;
}

string People::ToString() const {
    stringstream ss;
    ss << "{";
    for (int i = 0; i < _size; ++i) {
        ss << _data[i]->ToString();
    }
    ss << "}";
    return ss.str();
}












