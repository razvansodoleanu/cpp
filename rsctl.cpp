#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string getConfig()

{
     const char * val = std::getenv("KUBECONFIG" );
     if ( val == nullptr ) { // invalid to assign nullptr to std::string
         return "Kubeconfig environment variable is not set!";
     }
     else {
         return val;
     }

}

int main()
{
 string envvar=getConfig();

 cout << envvar;


}
