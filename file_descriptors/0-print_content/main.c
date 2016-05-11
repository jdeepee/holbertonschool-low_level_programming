#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **argv) {
  int file; 
  char buffer;

  if (ac != 2) { /* not correct amount of command line arguments */
    return (1);
  }

  file = open(argv[1], O_RDONLY); /* open file to print contents */
  
  while(read(file, &buffer, 1)) {
    write(1, &buffer, 1); /* write contents of file */
  }

  if(close(file)){
    return (1);
  }
  
  return(0);
}
