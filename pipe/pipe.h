#define ASIO_STANDALONE
#define ASIO_HEADER_ONLY
#define ASIO_HAS_STD_CHRONO

#include <iostream>
#include <asio.hpp>

#include "channel.h"

namespace pipe
{

    class Pipe
    {
    public:
        Pipe();
    };

}