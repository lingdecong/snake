#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define _GUN_SOURCE
#include <getopt.h>

#include "argv.h"

void handle_argv(int argc, char *argv[])
{
	int opt;
	struct option longopts[] = {
	{"version", 0, NULL, 'v'},
	{"help", 0, NULL, 'h'}};
	
	opt = getopt_long(argc, argv, "vh", longopts, NULL);
	while(opt != -1)
	{
		switch(opt) {
			case 'v':
				break;
			case 'h':
				break;
			case ':':
				break;
			case '?':
				break;
		}
		opt = getopt_long(argc, argv, "vh", longopts, NULL);
	}
	
	for(;optind < argc; optind++);
	
}
