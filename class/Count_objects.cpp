#include <iostream>
using namespace std;

class A
{
  private:
      static int total;
  public:
      A()
      {
          total++;
      }
      void display()
      {
          cout<<"Total no of objects : "<<total<<endl;
      }
};

int A::total=0;
int main()
{
    A obj[10];
    obj[0].display();

    A obj1[5];
    obj1[0].display();
}
