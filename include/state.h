#ifndef STATE_H
#define STATE_H


// Server states
typedef enum
{
    ff_HANDSHAKE,
    ff_STATUS,
    ff_LOGIN,
    ff_CONFIGURATION,
    ff_PLAY,
} ff_State;


#endif