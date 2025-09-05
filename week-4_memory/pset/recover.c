#include <cs50.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw\n");
        return 1;
    }

    FILE *raw = fopen(argv[1], "r");
    if (raw == NULL)
    {
        return 2;
    }

    uint8_t buffer[512];

    bool file_open;
    bool new_sign;

    FILE *img = NULL;
    int jpg_count = 0;
    char filename[10];

    while (fread(buffer, 1, 512, raw) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (img != NULL)
            {
                fclose(img);
            }

            sprintf(filename, "%03i.jpg", jpg_count++);
            img = fopen(filename, "w");
            fwrite(buffer, 1, 512, img);
        }
        else if (img != NULL)
        {
            fwrite(buffer, 1, 512, img);
        }
    }

    fclose(img);
    fclose(raw);
}
