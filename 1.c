#include "mlx_linux/mlx.h"
#include <stdlib.h>
#include <time.h>

#define WIDTH 800
#define HEIGHT 500

int main()
{
    void    *mlx_connection;
    void    *mlx_wimdow;

    srand(time(NULL));
    mlx_connection = mlx_init ();
    mlx_wimdow = mlx_new_window(mlx_connection, WIDTH, HEIGHT, "My 1* wimdow");

    for (int y = HEIGHT * 0.1; y < HEIGHT * 0.9; y++)
    {
        for (int x = WIDTH * 0.1; x < WIDTH * 0.9 ; x++)
        {
            mlx_pixel_put(mlx_connection, 
                            mlx_wimdow, 
                            x, 
                            y, 
                            rand() % 0x100000);
        }
    }
    mlx_string_put(mlx_connection,
                    mlx_wimdow,
                    WIDTH * 0.8,
                    HEIGHT * 0.95,
                    rand() % 0x100000,
                    "My Pollock");
     
    mlx_loop(mlx_connection);
}
