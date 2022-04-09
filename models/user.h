//
// Created by Ron Hjorth on 4/8/22.
//

#ifndef C___USER_H
#define C___USER_H

#include <string>
#include <iostream>

using namespace std;

class user{
    private:
        int _id = 0;
        string _firstName;
        string _lastName;
        string _middleName;
        string _loginName;
        string _email;
        string _cellPhone;

    public:
        user();

        user(const string &firstName, const string &lastName, const string &middleName, const string &loginName,
             const string &email);

    user(const string &firstName, const string &lastName, const string &middleName, const string &loginName,
         const string &email, const string &cellPhone);

    /* setters and getters */
        int getId() const;
        void setId(int id);

        const string &getFirstName() const;
        void setFirstName(const string &firstName);

        const string &getLastName() const;
        void setLastName(const string &lastName);

        const string &getMiddleName() const;
        void setMiddleName(const string &middleName);

        const string &getLoginName() const;
        void setLoginName(const string &loginName);

        const string &getEmail() const;
        void setEmail(const string &email);

        const string &getCellPhone() const;
        void setCellPhone(const string &cellPhone);

        /* general methods */
        void printUser(){
            string output = this->_firstName + " ";
            output.append(this->_middleName + " ");
            output.append(this->_lastName + '\n');
            output.append(this->_loginName + '\n');
            output.append(this->_email + '\n');
            output.append(this->_cellPhone + '\n');
            cout  << output << endl;
        }
};
#endif //C___USER_H
