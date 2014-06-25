#include <stdio.h>
#include <stdlib.h>
#include "hello.h"

struct _Hello {
  char *message;
};

Hello *
hello_new(void)
{
  Hello *hello;

  hello = malloc(sizeof(Hello));

  hello->message = "Hello, Autotools!";

  return hello;
}

void
hello_free(Hello *hello)
{
  free(hello);
}

void
hello_say(Hello *hello)
{
  printf("%s\n", hello->message);
}
