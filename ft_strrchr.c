/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:50:57 by ykruhlyk          #+#    #+#             */
/*   Updated: 2022/05/08 19:24:12 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ptr = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (ptr);
}

// int	main(void)
// {
//    char	str[] = "1l2345l676l9";
//    int	ch = 'l';
//    char	*ach;

//    ach = ft_strrchr(str, ch);
//    if (ach == NULL)
//       printf ("We didn't find it\n");
//    else
//       printf ("We found it on position - %ld\n", (ach-str+1));
//    return (0);
// }
