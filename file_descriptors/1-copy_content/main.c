#include <fcntl.h>
#include <unistd.h>


int main(int ac, char **argv) { 
  int source, dest;
  char c;

  source = open(argv[1], O_RDONLY); /* open the source file as read only */

  if (ac != 3) { /* if not correct amount of command line arguments */
    return (1);
  } else if(source < 0) {
    return (1); 
  }

  dest = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0644); /* create destination file with appropriate permissions */

  while(read(source, &c, 1)) {
    write(dest, &c, 1); /* write contents to new file */
  }

  if (close(source) || close(dest)) {
    return (1); /* error */
  }
  return (0);
}
