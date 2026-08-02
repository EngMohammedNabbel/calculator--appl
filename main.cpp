#include <iostream>

int add(int a , int b)
{
  return a + b;
}
int subtract(int a , int b)
{
  return a - b;
}
int multiple(int a , int b)
{
  return a * b;
}

int main()

{
    cout << "Calculator App "<< endl;
    cout << " 2 + 3 = "<<add(2,3)<< endl;
    cout << " 5 - 2 = "<<subtract(5,2)<< endl;
    cout << " 5 * 2 = "<<multiple(5,2)<< endl;

    return 0;
}