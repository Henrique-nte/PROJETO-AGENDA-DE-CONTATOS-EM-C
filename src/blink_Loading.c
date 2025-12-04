#include <stdio.h>
#include <unistd.h> // Linux. No Windows usar Sleep()

void blink_loading()
{
    for (int i = 0; i < 6; i++)
    {
        printf("...\r");
        fflush(stdout);
        usleep(300000);

        printf("             \r"); // limpa a linha
        fflush(stdout);
        usleep(300000);
    }
}
