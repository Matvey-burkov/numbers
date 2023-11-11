#include <map>
#include <iostream>



int main() 
{
 std::map< int, std::string>numbers
  = {
   {1, "I" },
   {4, "IV" },
   {5, "V" },
   {9, "IX" },
   {10, "X" },
   {40, "XL" },
   {50, "L" },
   {90, "XC" },
   {100, "C" },
   {400, "CD" },
   {500, "D" },
   {900, "CM" },
   {1000, "M"},
 };

 std::map<int, std::string>::iterator it;

 int ch;

 std::cout << "Enter your number: ";
 std::cin >> ch;

 size_t i = 12;

 for (it = numbers.begin(); i > 0; it++, i--) {}
 
 for (; ch != 0;)
 {
  if(ch<it->first)
  { 
   --it;
  }
  else
  {
   std::cout << numbers[it->first];
   ch -= it->first;
  }
  
 }

 return 0;
}
