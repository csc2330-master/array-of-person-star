//
// Created by Carlos R. Arias on 11/2/22.
//

#ifndef ARRAY_OF_PERSON_STAR_PERSON_H
#define ARRAY_OF_PERSON_STAR_PERSON_H

#include <string>

using std::string;

class Person {
private:
    string _name;
    unsigned int _age;
public:
    Person(const string& name, unsigned int age = 0);
    string GetName()const;
    unsigned int GetAge()const;
    void Birthday();
    string ToString()const;
};


#endif //ARRAY_OF_PERSON_STAR_PERSON_H
