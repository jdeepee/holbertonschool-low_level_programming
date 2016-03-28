#include <stdio.h>

int length_check(char *s, int count){
	if (s[count] != '\0'){
		return length_check(s, count+1);
	} else {
		return count;
	}
}

int check_palindrome(char *s, int count, int len)
{
  if (count >= len) return 1;
  if (s[count] != s[(len-count)-1]) return 0;
  return check_palindrome(s, count+1, len);
}

int is_palindrome(char *s){
	int count=0;
	int length;

	length = length_check(s, count);
	return check_palindrome(s, 0, length);
}
