//
// Created by gerso on 5/10/2020.
//

#ifndef LAB07_FILES_SERIALIZATION_GERSON_HERNANDEZ_PERSON_H
#define LAB07_FILES_SERIALIZATION_GERSON_HERNANDEZ_PERSON_H

#include <iostream>
#include <sstream>

using namespace std;

class Person {

private:
    string name;
    int age;
    string id;

public:

    Person();
    Person(string name, int age, string id);
    virtual ~Person();

    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    string getId();
    void setId(string id);
    virtual string toString();
};


#endif //LAB07_FILES_SERIALIZATION_GERSON_HERNANDEZ_PERSON_H
