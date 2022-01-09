#include<iostream>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc, char * argv[])
{
    if(argc != 3 || argc !=4 || argv[1] == "--help")
	{
		printf("Usage: lncmd [-s] source_file destination_file, use -s for symbolic link, default: hard link\n");
		exit(EXIT_FAILURE);
	}
    if(argc == 4)
        symlink(argv[2], argv[3]);
    else
        link(argv[1], argv[2]);
    
    return 0;
}