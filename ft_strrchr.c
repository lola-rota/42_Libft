#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
