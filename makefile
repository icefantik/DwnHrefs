all:
	gcc main.c href.c shref.c dir.c  -I ./include -lcurl -o pars
