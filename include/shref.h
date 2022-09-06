#ifndef __SHREF__
#define __SHREF__

#include <string.h>
#include <dir.h>

void rslash(char*); // replace slash in link
char *fnlink(char*, int); // get name file from link
char *substr(const char*, int, int, char*);
void reverse(char*, int);

#endif
