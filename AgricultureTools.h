#ifndef UNTITLED27_AGRICULTURETOOLS_H
#define UNTITLED27_AGRICULTURETOOLS_H
#include <string>
using namespace std;

class AgricultureTools {
private:
    string tools;
    string bazr ;

public:
    string getTools() const;

    void setTools(string tools);

    string getBazr() const;

    void setBazr(string bazr);

    AgricultureTools(string tools, string bazr);

    virtual void print() const;
};


#endif //UNTITLED27_AGRICULTURETOOLS_H
