#pragma once
#include <vector>

namespace pipe
{

    class Buffer
    {
    public:
        Buffer();
    private:
        std::vector<char> m_buffer;
    };

}
