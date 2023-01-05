#include <string.h>
#include "main.h"
int wildcmp(char *s1, char *s2) {
  while (*s1 && *s2) {
    if (*s2 == '*') {
      /* find the next non-wildcard character in s2 */
      char *next = s2 + 1;
      while (*next == '*') ++next;
      if (!*next) return 1;  /* s2 ends with '*', so it matches everything

      * try to match s2 with s1, starting at every possible position */
      while (*s1) {
        if (wildcmp(s1, next) == 1) return 1;
        ++s1;
      }
      return 0;
    }
    if (*s1 != *s2) return 0;
    ++s1;
    ++s2;
  }
 
  return *s1 == *s2;
}

