//
// Created by Carlos R. Arias on 11/2/22.
//

#ifndef ARRAY_OF_PERSON_STAR_PEOPLE_H
#define ARRAY_OF_PERSON_STAR_PEOPLE_H

#include "person.h"

class People {
private:
    Person** _data;
    unsigned int _size;
    unsigned int _max;
public:
    People(unsigned int max);
    ~People();
    bool AddPerson(const Person& person);
    bool AddPerson(const string& name, unsigned int age = 0);
    const Person* Get(unsigned int index)const;
    unsigned int Size()const;
    string ToString()const;

};


#endif //ARRAY_OF_PERSON_STAR_PEOPLE_H
