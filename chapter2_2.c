#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[], char *enV[])
{
	printf("Content-type:text/html\n\n");
	printf("<html>\n");
	printf("<body bgcolor=\"%s\">\n",argv[1] );
	printf("</body>\n");
	printf("<html>\n");
	return 0;
}