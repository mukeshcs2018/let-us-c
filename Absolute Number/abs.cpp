#include "iostream"

int main()
{
  int num;
  std::cout << "Enter the number to check: " << '\n';
  std::cin >> num;
  if (num < 0) {
      std::cout<<(-1)*num;
  }else
  std::cout<<num;
}

