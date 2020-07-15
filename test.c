#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>




int main(int argc, char *argv[])
{
	
	FILE *fd;	
	fd = fopen(argv[1], "rb");
	char buf[16];
	
	memset(buf, '\0', sizeof(buf));
	size_t result;
	
	if (fd == NULL)     
	{

		puts("파일을 열 수가 없습니다!");
		exit(1);           
        
    	}

	else
	{
	
		puts("파일을 성공적으로 열었습니다!");
		
	}
	
		fread(buf, 1, 256, fd);
		
	
		puts("파일을 성공적으로 읽었습니다!");
		for(int i; i < sizeof(buf) / sizeof(int); i++)
		{
			printf("%x\n", buf[i]);	
		}
	


	fclose(fd);

	return 0;
	
}
