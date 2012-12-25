#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define _GUN_SOURCE
#include <getopt.h>

#include "argv.h"

#define VERSION "v0.1"

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
				print_version();
				break;
			case 'h':
				print_help();
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

void print_version()
{
	printf("snake "VERSION" by lingdecong\n");
}

void print_help()
{
	printf("The game is building!\n");
}
