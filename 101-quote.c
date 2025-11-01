#include <unistd.h>

/**
 * Author: Aminu Mathias
 * Program: WinMingle Community C Training
 * Description: Print to standard error without printf/puts
 */

int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
