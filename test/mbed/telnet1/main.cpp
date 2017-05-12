#include <mbed.h>

void telnet_setup();
void telnet_loop();

int main()
{
    telnet_setup();

    for(;;)
    {
        telnet_loop();
    }
    
    return 0;
}
