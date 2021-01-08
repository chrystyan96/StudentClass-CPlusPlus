#pragma once
#include <iostream>

using namespace std;

class Student {
    std::string name;
    int id;
    int gradDate;

/*
We can use functions to access the data in a class.

Functions that access and/or modify data values in classes are called mutators.
Check this page to learn more about Mutators (https://en.wikipedia.org/wiki/Mutator_method)

Now let's add the setName function (functions in classes are also called methods) to our Student class. Recall the default for members in a class is private. We want the access functions to be public.
So we add the keyword "public" and all members listed after it are accessible: 
*/
public:
    void setName(string nameIn);
    void setId(int idIn);
    void setGradDate(int gradDateIn);
    string getName();
    int getId();
    int getGradDate();
    void print();
};

void Student::setName(string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
    gradDate = gradDateIn;
}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}

void Student::print()
{
    cout << name << " " << id << " " << gradDate;
}
