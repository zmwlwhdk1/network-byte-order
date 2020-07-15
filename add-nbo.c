#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main(int argc, char *argv[])
{
	int i = argc;
	int j;
	int n = argc - 1; //마지막 인자
	printf("ARGC : %d\n", argc);
	
	printf("%s\n", argv[1]);
	
	
	FILE *fd;
	//FILE *fd_2;
	uint8_t buf[257];

	int len;
	
	//for ( j = 1;  j < n; j++)
	//{
	
		fd = fopen(argv[1], "rb");
		//fd_2 = fopen(argv[2], "w");
		
		while ( len=fread(buf, 1, 256, fd)  )
		{
			
			//buf[len] = '\0';
			memset(buf, '\0', sizeof(buf));
			
			printf("%s\n", buf);
			
			printf("Length : %d\n", len);
		}

		//fclose(fd_2);
		fclose(fd);

		return 0;
		 //memset(buf, '\0', sizeof(buf));
	
	//}
	
	
}
