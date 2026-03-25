#include "print_func.h"
#include <cstdio>

#define FOOO   0
#define BARRR  7
#define FOOBAR 4

static void print_foo() {
    printf("foo");
}


void print_string(const char* str_ptr){
    printf("%s", str_ptr);
    puts("");
    puts("");
    return;
}

