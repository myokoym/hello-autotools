#ifndef __HELLO_H__
#define __HELLO_H__

typedef struct _Hello Hello;

Hello *hello_new(void);
void hello_free(Hello *hello);
void hello_say(Hello *hello);

#endif /* __HELLO_H__ */
