# furyfor (WIP)
Minecraft server written in C

## Notes
* Project is not in a useable state
* Project is not currently accepting to contributions
* This document will contain some notes on code style, but this is temporary until the project is more fleshed out, in which there will be more well-structured documentation.

## Code style notes
* The `ff_UNIMPLEMENTED_TYPE` macro is used to generate warnings when attempting to use unimplemented types. This is to allow for building when skeleton code is involved.
* Inlining has not been profiled yet, so inlined functions are subject to change later on. I am only guessing at what functions would be beneficial to inline as of right now.