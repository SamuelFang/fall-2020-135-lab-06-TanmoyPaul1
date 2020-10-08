#include <iostream>
#include "funcs.h"

int main()
{
  test_ascii("");
  test_ascii(" ! @ # $ %");
  test_ascii("ABCDEFGHI");
  test_ascii("abcdefghi");
  test_ascii("Cat :3 Dog");
  return 0;
}
