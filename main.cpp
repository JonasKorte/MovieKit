#include <iostream>
#include "include/core.h"

using namespace MK;

int main()
{
    MKWindow *window = createWindow("MovieKit", 0, 0, 640, 480);
    MKWindowState state = updateWindow(window);

    if (state.message.channel == MKWindowMessageChannel::MKWMC_LOG)
    {
        std::cout << "Log: ";

        if (state.message.message == "initialized")
        {
            std::cout << "Window has been initialized." << std::endl
                      << "From Window: \"" << state.title << "\"." << std::endl;
        }
    }
    return 0;
}