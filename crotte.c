/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crotte.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:38:04 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/05 05:01:33 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	dakey(int key, void *param)
{
	switch (key)
	{
		case W:
			printf("W\n");
			break;
		case A:
			printf("A\n");
			break;
		case S:
			printf("S\n");
			break;
		case D:
			printf("D\n");
			break;
		case ESC:
			exit(1);
		default:
			printf("key : %d\n", key);
	}
	return (0);
}

int main()
{
	void	*ptr;
	void	*win_ptr;

	ptr = mlx_init();
	win_ptr = mlx_new_window(ptr, 300, 300, "swag incroyable");
	printf("size: %lu\n", sizeof(ptr));
	mlx_key_hook(win_ptr, dakey, (void *)0);
	mlx_loop(ptr);
}
