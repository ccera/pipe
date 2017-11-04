#pragma once

#include <vector>

namespace pipex
{

    class Buffer
    {
    public:
        Buffer();
    private:
        std::vector<char> m_buffer;
    };

}
