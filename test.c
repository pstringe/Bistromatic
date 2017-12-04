#include <stdio.h>
#include "libft.h"

int main() {
	char	*str;
	char	buf[0xF0];
	char	*res;
		
	str = "AAAA";
	buf[4] = 0;

	res = ft_strcat(buf, str);

	printf("%s\n", res);
}
