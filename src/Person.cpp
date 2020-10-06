//
// Created by gerso on 5/10/2020.
//

#include "Person.h"


Person::Person() {}

Person::~Person() {}

Person::Person(string name, int age, string id) {
    this->name=name;
    this->age=age;
    this->id=id;
}

string Person::getName() {
    return this->name;
}

void Person::setName(string name) {

    this->name=name;
}

int Person::getAge() {
    return this->age;
}

void Person::setAge(int age) {

    this->age=age;
}

string Person::getId() {
    return this->id;
}

void Person::setId(string id) {

    this->id = id;
}
string Person::toString() {

    return "jajaja";
}




