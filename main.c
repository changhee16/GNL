#include "get_next_line.h"
#include <fcntl.h> //read 옵션인 O_RDONLY 등을 위해서
#include <stdio.h>
#include <string.h>

int main(void)
{
    int fd;
    int fd2;
    char *res1;
    char *res2;

    fd = open("./gnlTester/files/multiple_nlx5"
    , O_RDONLY); 
    printf("test %d\n", (int)read(fd, NULL, 0));
res1 = get_next_line(fd);
  printf("1: %s",res1);
  free(res1);
      printf("2: %s",get_next_line(fd));
     printf("3: %s",get_next_line(fd));
       printf("4: %s",get_next_line(fd));
      printf("5: %s",get_next_line(fd));
     printf("6: %s",get_next_line(fd));
     //  printf("7: %s",get_next_line(fd));
     // printf("8: %s",get_next_line(fd));
     //printf("9: %s",get_next_line(fd));
       //   printf("10: %s",get_next_line(fd));
     system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked && rm -rf leaks_result_temp");
    return (0);
}