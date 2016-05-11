#include <fcntl.h>
#include <unistd.h>

int print_char(char c);

int main(int ac, char **argv) { 
  int file; /* variable fo file */
  char c; 

  if(ac == 1) { /* one argument */
    while(read(0, &c, 1)) {
      print_char(c);
    }
    return(0);
  } else if (ac == 2) { /* two arguments so open and print content of file */
    file = open(argv[1], O_RDONLY); /* opening file as read only */

    while(read(file, &c, 1)) { /* while loop unti EOF is met */
      print_char(c); 
    }
    
    if(close(file)){
      return (1);
    }
    return(0);
  }
  
  return(1); 
}
