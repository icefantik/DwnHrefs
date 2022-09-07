#include "dir.h"

void ctrdir(char* name_dir) {
	char path[MAXLEN_PATH];
	sprintf(path, "%s/%s", DOWNDIR, name_dir);
	if (mkdir(path, 0777) == 0) {
		printf("Create directory: %s\n", name_dir);
	}
        /*	
	else {
		printf("Directory: %s not create\n", name_dir);
	}
	*/
}
