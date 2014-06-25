#include "hello.h"

int
main(int argc, char *argv[])
{
  Hello *hello;

  hello = hello_new();
  hello_say(hello);

  return 0;
}
