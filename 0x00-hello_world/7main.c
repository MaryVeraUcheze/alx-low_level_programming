#include <unistd.h>
/**
*main-A function
*
*Return:Always 0 (Success)
*/
int main(void)
{
char *str = "and that piece of art is useful\\" - Dora Korpar, 2015-10-19\\n";
ssize_t len = 0;
while (str[len])
{
        len++;
}
write(2, str, len);
return (1);
}

