int printf(const char *format, ...);

int main(void)
{
  printf("PERCENT{%%}\n");
  printf("UNKNOWN SPECIFIER{%Q}\n");
  return (0);
}
