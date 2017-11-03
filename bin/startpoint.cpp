#include <pipe.h>

int main()
{
    pipe::Pipe p;

    asio::io_service io;
    asio::ip::tcp::socket _socket(io);
    pipe::Channel chanel(std::move(_socket));
    
    std::cout << "Main entry" << std::endl;
    
    return 0;
}