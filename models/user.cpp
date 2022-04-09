//
// Created by Ron Hjorth on 4/8/22.
//
#include "user.h"
#include <iostream>
using namespace std;

user::user() {}
user::user(const string &firstName, const string &lastName, const string &middleName, const string &loginName,
           const string &email) : _firstName(firstName), _lastName(lastName), _middleName(middleName),
                                  _loginName(loginName), _email(email) {}

user::user(const string &firstName, const string &lastName, const string &middleName, const string &loginName,
           const string &email, const string &cellPhone) : _firstName(firstName), _lastName(lastName),
                                                           _middleName(middleName), _loginName(loginName),
                                                           _email(email), _cellPhone(cellPhone) {}

int user::getId() const {
    return _id;
}

void user::setId(int id) {
    _id = id;
}

const string &user::getFirstName() const {
    return _firstName;
}

void user::setFirstName(const string &firstName) {
    _firstName = firstName;
}

const string &user::getLastName() const {
    return _lastName;
}

void user::setLastName(const string &lastName) {
    _lastName = lastName;
}

const string &user::getMiddleName() const {
    return _middleName;
}

void user::setMiddleName(const string &middleName) {
    _middleName = middleName;
}

const string &user::getLoginName() const {
    return _loginName;
}

void user::setLoginName(const string &loginName) {
    _loginName = loginName;
}

const string &user::getEmail() const {
    return _email;
}

void user::setEmail(const string &email) {
    _email = email;
}

const string &user::getCellPhone() const {
    return _cellPhone;
}

void user::setCellPhone(const string &cellPhone) {
    _cellPhone = cellPhone;
}