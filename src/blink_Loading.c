#include <stdio.h>
#include <unistd.h> // Linux. No Windows windows.h

void blink_loading()
{
    for (int i = 0; i < 6; i++)
    {
        printf("...\r");
        fflush(stdout);
        usleep(200000);

        printf("             \r"); // limpa a linha
        fflush(stdout);
        usleep(200000);
    }
}
