/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crotte.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:38:04 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/05 04:26:33 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>

int	dakey(int key, void *param)
{
	printf("%d\n", key);
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
