#include <iostream>
#include <string>
#include "funcs.h"
#include "decode.h"
#include "caesar.h"

int main()
{
  std::cout << "test_ascii(""):" << std::endl;
  test_ascii("");
  std::cout << "test_ascii(" ! @ # $ % "):" << std::endl;
  test_ascii(" ! @ # $ % ");
  std::cout << "test_ascii("ABCDEFGHI"):" << std::endl;
  test_ascii("ABCDEFGHI");
  std::cout << "test_ascii("abcdefghi"):" << std::endl;
  test_ascii("abcdefghi");
  std::cout << "test_ascii("Cat :3 Dog"):" << std::endl;
  test_ascii("Cat :3 Dog");
  std::cout << "decodeCaesar("Validation"):" << std::endl;
  std::cout << decodeCaesar("Validation") << std::endl;
  std::cout << "decodeCaesar("Afqnifynts"):" << std::endl;
  std::cout << decodeCaesar("Afqnifynts") << std::endl;
  std::cout << "decodeCaesar("Hello"):" << std::endl;
  std::cout << decodeCaesar("Hello") << std::endl;
  std::cout << "decodeCaesar("Ifmmp"):" << std::endl;
  std::cout << decodeCaesar("Ifmmp") << std::endl;
  std::cout << "decodeCaesar("abcdef"):" << std::endl;
  std::cout << decodeCaesar("abcdef") << std::endl;
  std::cout << "decodeCaesar("bcdefg"):" << std::endl;
  std::cout << decodeCaesar("bcdefg") << std::endl;
  // std::cout << encryptCaesar("Validation", 5) << std::endl;
  // std::cout << encryptCaesar("Phone", 3) << std::endl;
  return 0;
}
