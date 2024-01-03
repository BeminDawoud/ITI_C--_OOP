#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class person
{
protected:
    string password;

public:
    int ID;
    string name;
    string email;
    person();
    person(int ID, string Name, string Mail);

    // setters
    void setID(int id);
    void setName(string Name);
    void setMail(string Email);

    // getters
    int getID();
    string getMail();
    string getName();

    void modifyemail();
    void changePassword();
    void display();
    ~person();

};

#endif // PERSON_H
