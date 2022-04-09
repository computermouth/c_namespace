#include <stdio.h>

#include "mylib.h"

static void myfunc();

const int a = 10;

void seta(){
	a = 10;
}

const mylib_export_t mylib = {
	.myfunc = myfunc,
};

static void myfunc(){
	printf("void myfunc()\n");
}

