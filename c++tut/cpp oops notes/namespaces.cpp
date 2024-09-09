                            /*************************************
                    Namespaces are used to organize code into logical groups
                    and to prevent name collisions that can occur especially 
                    when your code base includes multiple libraries.
                    The namespace keyword is used to define a namespace, and 
                    members are accessed using the scope resolution operator ::
                            **************************************/


#include <iostream>
using namespace std;
//using namespace a;
using std::cout;


/*
   using a::vector; //for taking vector out of scope of namespace
   using namespace a; //for using the a namespace
*/
using a::vector;// take vector outside the scope of namespace
using b::list;


namespace a
{
    class vector
    {
    };
}
namespace b
{
    class vector
    {
    };
    class list
    {
    };
}

int main()
{
    vector v;
    list b;
    b::vector x;
}


