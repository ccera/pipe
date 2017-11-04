#pragma once
#define ASIO_STANDALONE
#define ASIO_HEADER_ONLY
#define ASIO_HAS_STD_CHRONO

#include <iostream>
#include <asio.hpp>

namespace pipex
{

    class Channel
    {
    public:
        Channel(asio::ip::tcp::socket&&  socket);

    private:
        asio::ip::tcp::socket m_socket;
    };

}
