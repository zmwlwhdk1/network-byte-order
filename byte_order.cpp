#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h> // for htonl
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>





int main(int argc, char *argv[])
{
	uint32_t network_buffer1[16];
	uint32_t network_buffer2[16]; 
	
	
	
	
	FILE *fd1;
	fd1 = fopen(argv[1], "rb");	
	fread(network_buffer1, 1, 10, fd1);
	
	
	
	uint32_t* p =  network_buffer1;
	uint32_t n = ntohl(*p);
	
	
	
	FILE *fd2;
	fd2 = fopen(argv[2], "rb");
	fread(network_buffer2, 1, 10, fd2);	
	
	
	
	
	uint32_t* q = network_buffer2;
   	uint32_t m = ntohl(*q);
   	
   	
   	uint16_t a = n + m;	
	printf( "(%d)0x%x + (%d)0x%x = (%d)%x\n", n, n, m, m, a, a);
	
	
	fclose(fd2);
	fclose(fd1);
	
	return 0;
}








