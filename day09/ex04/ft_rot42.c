/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 00:59:03 by skuntoji          #+#    #+#             */
/*   Updated: 2018/06/29 00:59:12 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 97) + 42) % 26 + 97;
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 65) + 42) % 26 + 65;
		i++;
	}
	return (s);
}
