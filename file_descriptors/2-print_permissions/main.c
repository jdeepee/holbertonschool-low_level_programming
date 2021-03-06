#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>

int print_char(char);

int main(int argc, char *argv[])
{
  struct stat fileStat; /* struct for file stats */

  if (argc != 2) 
  {
    return (1); /* Not enough arguments supplied */
  }
  else if (lstat(argv[1], &fileStat) == -1) /* run lstat */
  {
    return (1); /* error */
  }
  else /* print the permisions of the file */
  {  
    print_char( (S_ISLNK(fileStat.st_mode)) ? 'l' :(S_ISDIR(fileStat.st_mode)) ? 'd' : '-');
    print_char( (fileStat.st_mode & S_IRUSR) ? 'r' : '-');
    print_char( (fileStat.st_mode & S_IWUSR) ? 'w' : '-');
    print_char( (fileStat.st_mode & S_IXUSR) ? 'x' : '-');
    print_char( (fileStat.st_mode & S_IRGRP) ? 'r' : '-');
    print_char( (fileStat.st_mode & S_IWGRP) ? 'w' : '-');
    print_char( (fileStat.st_mode & S_IXGRP) ? 'x' : '-');
    print_char( (fileStat.st_mode & S_IROTH) ? 'r' : '-');
    print_char( (fileStat.st_mode & S_IWOTH) ? 'w' : '-');
    print_char( (fileStat.st_mode & S_IXOTH) ? 'x' : '-');
    print_char( '\n');
  }  

  return (0);
}
