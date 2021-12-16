#include <iostream>
#include "Farmer.h"
#include "AgricultureTools.h"
#include "Tractor.h"
using namespace std;

ostream &operator<<(ostream & out, Farmer & f)
{
    cout <<"Name: " << f.name << endl;
    cout <<"last name: " << f.lastName << endl;
    cout <<"age: " << f.age << endl;

    return out;
}

istream &operator>>(istream & input, Farmer & f)
{
    cout << "say your name" << endl;
    input >> f.name;
    cout << "say your Lastname" << endl;
    input >> f.lastName;
    cout << "say your age" << endl;
    input >> f.age;

    return input;
}

int main() {

  AgricultureTools *agricultureTools = new AgricultureTools("bil" , "wheat");
  Farmer *farmer = new Farmer("AMIN" , "AHMADI " , 32,*agricultureTools);

  cout << "***The testing of farmer class member functions began***" << endl;
  cout<<farmer->getName()<<"\n";
  cout<<farmer->getLastName()<<"\n";
  cout<<farmer->getAge()<<"\n";
  cout<<farmer->getAgricultureTools().getTools()<<"\n";
  cout<<farmer->getAgricultureTools().getBazr()<<"\n";
  cout << "***The farmer class member function test is over***" << endl;
  cout << "\n";

  cout << "***The testing of Input_output operator overloading to determine and display farmer information began***" << endl;
  cin >> *farmer;
  cout << *farmer;
  cout << "***The testing of Input_output operator overloading to determine and display farmer information is over***" << endl;
  cout << "\n";
  

  Tractor *tractor = new Tractor("kolang", "jo", 800.5, 21.8);
  cout << "please say how much power do you need for Tractor: ";
  float goodrat = 0;
  cin >> goodrat;
  try
  {
    tractor->setPower(goodrat);
  }
  catch(const exception& e)
  {
    cerr << e.what() << "  taractor not working" << " but we suggest 21.8 W for tractor" << '\n';
  }
  

  cout << "***The testing of Tractor class member functions and inherited functions began***" << endl;
  cout<<tractor->getTools()<<"\n";
  cout<<tractor->getBazr()<<"\n";
  cout<<tractor->getWeight()<<"\n";
  cout<<tractor->getPower()<<"\n";
  cout << "***The testing of Tractor class member functions and inherited functions is over***" << endl;
  cout << "\n";
  
  cout << "***testing of print function of  AgricultureTools and Tractor started***" << endl;
  cout << "\n";
  cout << "AgricultureTools: ";
  agricultureTools->print();
  cout << "\n";
  cout << "Tractor: ";
  tractor->print();
  cout << "\n";
  cout << "***testing of print function of  AgricultureTools and Tractor is over***" << endl;
  cout << "\n";

  cout << "***Using an alias and implementing a polymorphism between parent and child class using the print function started***" << endl;
  cout << "\n";
  AgricultureTools *vasayel = &*agricultureTools;
  Tractor *tirakhtoor = &*tractor;

  cout << "agriculturestools alias print: ";
  vasayel->print();
  cout << "\n";
  
  cout << "tractor alias print: ";
  tirakhtoor->print();
  cout << "\n";


  vasayel = &*tractor;
  cout << "using polymorphism: " << endl;
  vasayel->print();//polymorphism
  cout << "***Using an alias and implementing a polymorphism between parent and child class using the print function is over***" << endl;
  
  return 0;

}
