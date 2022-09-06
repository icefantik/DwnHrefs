#include "shref.h"

void rslash(char *name_file) // replace slash link name
{
        for (int index_name = 0; name_file[index_name] != '\0'; ++index_name) {
                if (name_file[index_name] == '/') {
                        name_file[index_name] = '\\';
                }
        }
}

char *fnlink(char* url, int len_url) // get name file link
{
        char *pch = strchr(url, '/');
	if (pch == NULL) {
		return url;
	}
	char dest[MAXLEN_NAMEFILE + 1];
	char *tmp = substr(url, pch - url + 1, len_url, dest);//index_slesh, len_url, dest);
	return tmp;
}

char *substr(const char* input, int offset, int len, char* dest)
{
        /*
        int input_len = strlen(input), tmp = offset + len;
	if (offset + len > len) {
		return "";
        }
        */
	strncpy(dest, input + offset, len);
        return dest;
}

void reverse(char* str, int len)
{
        char tmp;
        for (int start_index = 0, end_index = len - 1; start_index  < end_index; ++start_index, --end_index) {
                tmp = str[start_index];
                str[start_index] = str[end_index];
                str[end_index] = tmp;
        }
}

