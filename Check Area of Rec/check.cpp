#include "iostream"
int main()
{
  int len,bre,area,peri;
  std::cout << "Enter a length and Breadth of Rec: ";
  std::cin >> len>>bre;

  area = len* bre;
  peri = 2*(len+bre);

  if (area > peri)
  std::cout<<"Area is Greater than Perimeter\n";
  else
  {
    std::cout<<"Peri is greater than Area";
  }
}
