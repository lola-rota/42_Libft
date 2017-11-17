#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0])
	{
		while (s1[i])
		{
			while (s1[i] && s1[i] != s2[j])
				i++;
			while (s1[i] && s2[j] && s1[i] == s2[j])
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return (&s1[i - j]);
			else
			{
				i++;
				j = 0;
			}
		}
	}
	return (NULL);
}