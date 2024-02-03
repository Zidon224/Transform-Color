/* - Entry point of the color converter program - */





#include <iostream>
#include "debug.h"
#include "ext_deps/clipp.h"
#include "args_opts.hpp"



int main(int argc, char *argv[])
{
    #ifdef _WIN32
        SetTerminal(); //Setting up the terminal in order to use ansi escape codes for handling text colors in the terminal on windows.
    #endif
    if(argc == 1) Err("Atleast 1 argument is required!");
    clipp::parse(argc, argv, CLI_opt);
}