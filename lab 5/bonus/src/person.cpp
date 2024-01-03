#include "person.h"

person::person()
{
    ID = 0;
    name = "No Name";
    email = "No E-mail";
}

person::person(int id, string Name, string Mail)
{
    ID = id;
    name = Name;
    email = Mail;
    cout << "Enter the Password you want for " << name << ":" << endl;
    cin >> password;

}


void person::setID(int id)
{
    ID = id;
}


void person::setName(string Name)
{
    name = Name;
}


void person::setMail(string Email)
{
    email = Email;
}


int person::getID()
{
    return ID;
}


string person::getMail()
{
    return (email);
}


string person::getName()
{
    return (name);
}


void person::modifyemail()
{
    cout << "Enter the new e-mail that you want for " << name << ":" << endl;
    cin >> email;
}

void person::changePassword()
{
    cout << "Enter the new Password for " << name << ":" << endl;
    cin >> password;
    cout << "Password Updated Successfully.\n" << endl;
}

void person::display()
{
    cout << "\nPerson Information " << endl;
    cout << "------------------------------------------" << endl;
    cout << "Person's ID is " << ID << endl;
    cout << "Person's name is " << name << endl;
    cout << "Person's Email is " << email << endl;
    cout << "------------------------------------------\n" << endl;
}

person::~person()
{

}
