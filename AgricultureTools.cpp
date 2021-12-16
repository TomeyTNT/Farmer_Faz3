#include "AgricultureTools.h"
#include <iostream>

AgricultureTools::AgricultureTools(string tools,string bazr) : tools(tools), bazr(bazr) {}

string AgricultureTools::getTools() const {
    return tools;
}

void AgricultureTools::setTools(string tools) {
    AgricultureTools::tools = tools;
}

string AgricultureTools::getBazr() const {
    return bazr;
}

void AgricultureTools::setBazr(string bazr) {
    AgricultureTools::bazr = bazr;
}

void AgricultureTools::print() const
{
    cout << "bazr: " << getBazr() << "    tools: " << getTools() << endl;
}


