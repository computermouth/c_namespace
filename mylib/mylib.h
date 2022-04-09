#ifndef _MYLIB_H_
#define _MYLIB_H_

typedef struct {
	void (*myfunc)();
} mylib_export_t;

extern const mylib_export_t mylib;

extern const int a;

#endif
