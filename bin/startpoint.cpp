#include <channel.h>

int main()
{
    std::cout << "Constructing pipe, wait for 5 sec." << std::endl;

    asio::io_service io;
    asio::steady_timer timer(io);
    timer.expires_from_now(std::chrono::seconds(5));
    timer.wait();

    std::cout << "Pipe constructor end." << std::endl;

    asio::ip::tcp::socket _socket(io);
    pipex::Channel chanel(std::move(_socket));
    std::cout << "Main entry" << std::endl;

    return 0;
}
