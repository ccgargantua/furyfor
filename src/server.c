#include "server.h"

int main(void)
{
    ff_State state = ff_HANDSHAKE;
    ff_EXIT_CODE exit_code = 0;

    while(!exit_code)
    {
        switch(state)
        {
        case ff_HANDSHAKE: // TODO handshake state
            break;
        case ff_STATUS:  // TODO ff_STATUS state
            break;
        case ff_LOGIN:  // TODO ff_LOGIN state
            break;
        case ff_CONFIGURATION:  // TODO ff_CONFIGURATION state
            break;
        case ff_PLAY:  // TODO ff_PLAY state
            break;
        default:  // TODO default
            break;
        }
    }

    switch(exit_code);

    return 0;
}