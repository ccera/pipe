#include "pipe.h"

#include <thread>
#include <chrono>

Pipe::Pipe()
{
    std::cout << "Pipe constructor, wait for 5 sec." << std::endl;

    asio::io_service io;
    asio::steady_timer timer(io);
    timer.expires_from_now(std::chrono::seconds(5));
    timer.wait();

    std::cout << "Pipe constructor end." << std::endl;
}