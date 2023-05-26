/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:36:59 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 21:41:56 by mmarconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**frame(char*argv[], int argc);
int		**put_4(int**matrix, char*argv[]);
int		**put_3(int**matrix, char*argv[]);
int		**create_matrix(void);
void	print_matrix(int**matrix);
int		**frame_is_4(int**matrix, char*argv[]);
int		**cross_check_for_value_3(int**matrix, int**frame);

int	main(int argc, char *argv[])
{	
	int	**my_frame;
	int	**matrix;
	my_frame = frame(argv, argc);
	matrix = create_matrix();
	put_4(matrix, argv);
	put_3(matrix, argv);
	frame_is_4(matrix, argv);
	cross_check_for_value_3(matrix, my_frame);
	print_matrix(matrix);
}
