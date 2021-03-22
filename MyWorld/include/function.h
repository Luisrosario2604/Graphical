/*
** EPITECH PROJECT, 2017
** functions.h
** File description:
** all functions
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int main(int, char **);
void gamma_null(container_t *);
void gamma_ten(container_t *, int, int );
void gamma_five(container_t *, int, int );
void gamma_zero(container_t *, int, int );
int check_set_mouse(sfVector2f, sfVector2f, container_t *);
void effect_set(container_t *);
void mouse_sprt(container_t *);
void map_mouse(container_t *);
void fps_set(container_t *);
void sound_set(container_t *);
void color_set(container_t *);
int my_putnbr(int);
void check_set(container_t *);
int my_putstr(char const *);
int my_putchar(char);
void menu(container_t *);
void main_game(container_t *);
void events(container_t *);
void loading_textures(container_t *);
void start_all(container_t *);
void move_camera(container_t *);
void free_all(container_t *);
int my_strlen(char *);
void main_display(container_t *);
int **getfile(char *);
sfVertexArray *create_square_filled(container_t *);
sfVertexArray *create_square_lines(container_t *);
void wire_frame_square(sfVector2f **, container_t *);
sfVector2f **create_2d_map(int **, container_t *);
int wire_frame(sfVector2f **, container_t *);
void free_wire_frame(sfVector2f **);
void mouse(container_t *);
void choose_map(container_t *);
int **create_map_size(container_t *);
char *int_to_str(int *, container_t *);
void save_map(int **, container_t *c);
void settings(container_t *);
void print_color_levels(container_t *, sfVector2f *);
void print_volume_levels(container_t *, sfVector2f *);
void free_all_sub(container_t *);
void loading_textures_sub(container_t *);
void start_all_sub(container_t *);
void print_toolbar(container_t *);
void check_mouse(container_t *c, int , int , sfVector2f **);

#define MAP_X 6
#define MAP_Y 6
#define SCALING_X 64
#define SCALING_Y 64
#define SCALING_Z 8
#define NAME "My_world"
#define HELP "USAGE : ./my_world\n\nDon't forget to select a map\n"

#endif
