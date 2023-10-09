/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <ychibani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:23:42 by ychibani          #+#    #+#             */
/*   Updated: 2022/03/24 12:44:20 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	__strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
