#include <stdio.h>
#include "libft.h"

int main() {
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";

	char re = *strrchr(src, ' ');
	char ft = *ft_strrchr(src, ' ');

	printf("expected:\t%c\n\n",re);
	printf("\n-----\ndebuging:\t%c\n\n", ft);
}
