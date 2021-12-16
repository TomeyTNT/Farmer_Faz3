#ifndef UNTITLED27_FARMER_H
#define UNTITLED27_FARMER_H
#include "AgricultureTools.h"

class Farmer {
friend std::ostream &operator<<(std::ostream & , Farmer & );
friend std::istream &operator>>(std::istream & , Farmer & );
private:
    string name ;
    string lastName ;
    int age ;
    AgricultureTools agricultureTools;
public:
    const string getName() const;

    const string getLastName() const;

    Farmer(string name, string lastName, int age, const AgricultureTools &agricultureTools);

    int getAge() const;

    void setAge(int age);

    const AgricultureTools &getAgricultureTools() const;

    void setAgricultureTools(const AgricultureTools &agricultureTools);
};


#endif //UNTITLED27_FARMER_H
