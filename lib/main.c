#include "libft.h"

int main(void)
{
  char  *s;
  s = ft_itoa(-2147483648);
  printf("itoa:%s",s);
  return (0);
}