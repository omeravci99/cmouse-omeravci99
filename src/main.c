#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
int main(int argc, char** argv)
{
    mouse_reader   
    return 0;
}

void mouse_reader()
{
    int fd;
    const char *path = "/dev/input/mouse1";
    char buffer[3];
    ssize_t bytes_read;

    // Open the input file (mouse device file)
    fd = open(path, O_RDONLY);
    if (fd == -1)
    {
        printf("ERROR Opening %s\n", path);
        return -1;
    }

    int pos_x = 0;
    int pos_y = 0;

    while (1)
    {
        // Read data from the mouse device file
        bytes_read = read(fd, buffer, sizeof(buffer));
        if (bytes_read == -1)
        {
            perror("Error reading from file");
            break;
        }
        else if (bytes_read == 0)
        {
            printf("End of file\n");
            break;
        }
        else
        {
            // Process the mouse input data
            for (int i = 0; i < bytes_read; i++)
            {
                pos_x += buffer[1];
                pos_y += buffer[2];
                printf("%d, %d\n", pos_x, pos_y);
            }
        }
    }

    // Close the file descriptor when you're done with it
    close(fd);

}