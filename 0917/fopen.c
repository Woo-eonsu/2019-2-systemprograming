#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
int fd;
if ((fd = open (argv[1], O_RDWR)) == -1)
printf("error\n");
else printf("file %s success : %d\n", argv[1], fd);

close(fd);
exit(0);
}
