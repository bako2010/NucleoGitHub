#include <mbed.h>

void wait(int x);

int main()
{

  while (1)
  {
  }

 
}
 void wait(int x)
  {
    wait_us(x * 1000);
  }