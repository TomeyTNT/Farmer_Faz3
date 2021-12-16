#include "Farmer.h"

const string Farmer::getName() const {
    return name;
}

const string Farmer::getLastName() const {
    return lastName;
}

int Farmer::getAge() const {
    return age;
}

void Farmer::setAge(int age) {
    Farmer::age = age;
}



const AgricultureTools &Farmer::getAgricultureTools() const {
    return agricultureTools;
}

void Farmer::setAgricultureTools(const AgricultureTools &agricultureTools) {
    Farmer::agricultureTools = agricultureTools;
}

Farmer::Farmer(string name, string lastName, int age, const AgricultureTools &agricultureTools) :
name(name), lastName(lastName), age(age), agricultureTools( agricultureTools) {}
