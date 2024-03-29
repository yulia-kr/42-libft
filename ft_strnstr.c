/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:16:21 by ykruhlyk          #+#    #+#             */
/*   Updated: 2022/05/04 18:43:40 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*hs;

	i = 0;
	hs = (char *) haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hs);
	while (hs[i] && i < len)
	{
		j = 0;
		while (hs[i + j] && needle[j] && hs[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (j == n_len)
			return (hs + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	lstr[] = "123423789";
// 	const char	sstr[] = "237";
// 	char *ptr;
// 	ptr = ft_strnstr(lstr, sstr, 7);
// 	if(ptr == NULL)
//       printf("We didn't find it\n");
//    else
//       printf("We found it on position - %ld\n", (ptr-lstr+1));
//    return 0;
// }	
