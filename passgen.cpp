#include <stdio.h>
#include <iostream>
#include <random>
#include <string>

using namespace std;
int main()

{
 int length;
 string password="";

  string chars[74]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0","!","'","%","&","$","#","@","!","-","?","*","^"};

cout << "Input length: "; cin >> length;

for ( int i=0; i<length; i++)
{
  int pos = rand() % 74+ 1;
  password= password + chars[pos];

}
 cout << "Your password is: " << password << "\n";
 return 0;
}
