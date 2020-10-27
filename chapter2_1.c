#include <stdio.h>

#define STRINGSIZE 256


int main(int argc, char*argv[])
{
	char town[STRINGSIZE]="Guildford";
	char county[STRINGSIZE]="Surrey";
	char country[STRINGSIZE]="Great britain";
	int population = 66773;
	float latitude = 51.238599;
	float longitude = -0.566257;
	printf("town name:%s population:%d\n",town,population );
	printf("county%s\n",county );
	printf("country:%s\n",country );
	printf("location latitude: %f longitude:%f\n",latitude,longitude );
	printf("char = %d bytes int = %d bytes float = %d bytes\n",sizeof(char),sizeof(int),sizeof(float) );
	printf("memory used:%d bytes\n",((STRINGSIZE*3)*sizeof(char))+sizeof(float) );

	return 0;
}