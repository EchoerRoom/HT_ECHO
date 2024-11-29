#pragma once

#include <ios>
#include <sstream>
#include <string>
#include <vector>
#include "../Vendors/logger/Logger.h"



#define SAFE_BEGIN() __try {
#define SAFE_ERROR() } __except (EXCEPTION_EXECUTE_HANDLER) { \
	LOG_WARNING("Exception 0x%08x.", GetExceptionCode());

#define SAFE_END() }
#define SAFE_EEND() SAFE_ERROR(); SAFE_END();

namespace util {

    std::vector<std::string> split(const std::string& content, const std::string& delimiter);
    int64_t getCurrentTimeMs();
    std::string convertToWords(const std::string& input);
    std::string firstCharToLowerCase(std::string string);

    template <typename T>
    const char* getPtr(const T& value) {
        std::stringstream ss;
        ss << std::hex << std::showbase << reinterpret_cast<const void*>(value);
        static std::string result = ss.str();
        return result.c_str();
    }
}
