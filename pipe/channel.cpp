#include "channel.h"

using namespace pipex;

Channel::Channel(asio::ip::tcp::socket&& socket)
    : m_socket(std::move(socket))
{
    std::cout << m_socket.is_open() << std::endl;
}
