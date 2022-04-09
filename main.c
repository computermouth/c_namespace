#include <stdio.h>

#include "mylib/mylib.h"

void farts(){
	printf("farts\n");
}

int main(){
	printf("int main()\n");
	
	//~ const int x = 0;
	int *p = &a;
	*p = 10;
	printf("p: %d\n", a);
	
	void (**dirty)() = &(mylib.myfunc);
	*dirty = farts; 
	
	//~ mylib_export_t * ok = &mylib;
	//~ ok->myfunc = farts;
	mylib.myfunc();
	return 0;
}
