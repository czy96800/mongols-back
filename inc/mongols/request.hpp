#pragma once

#include <string>
#include <unordered_map>

namespace mongols
{

    class request
    {
    public:
        request()
            : client(), user_agent(), method(), uri(), param(), headers(), form(), cookies(), session(), cache()
        {
        }
        virtual ~request() = default;
        std::string client, user_agent, method, uri, param;
        std::unordered_map<std::string, std::string> headers, form, cookies, session, cache;
    };
} // namespace mongols


