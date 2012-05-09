#include <iostream>

int main()
{
  char name[100];
  std::cout << "名前を入力してください" << std::endl;
  std::cin.getline(name, sizeof(name));
  std::cout << name << "さん、こんにちわ！" << std::endl;
  return 0;
}
