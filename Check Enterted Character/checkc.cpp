#include "iostream"

int main()
{
  char ch;
  std::cout<<"Enter any Charater,Number or Special Symbol: ";
  std::cin>>ch;
  if(ch>=65 && ch<=90)
  std::cout<<"CAPITAL LATTER";
  else if(ch>=97 && ch<=122)
  std::cout<<"small letter";
  else if(ch>=48 && ch<=57)
  std::cout<<"Numbers";
  else if(((ch>=0)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=127)))
  std::cout<<"Special Symbols";
  return 0;
}
