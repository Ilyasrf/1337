#include<unistd.h>
int main()
{
    write (1, "9876543210", 10);
    write(1, "\n", 1);
}