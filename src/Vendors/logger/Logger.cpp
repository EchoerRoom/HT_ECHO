#include "Logger.h"

#include <Windows.h>
#include <iostream>
#include <chrono>
#include <cstdarg>
#include <fstream>
#include <filesystem>

struct Prefix {
	char color;
	const char* text;
};

Prefix getLevelPrefix(Logger::Level level) {
	switch (level) {
	case Logger::Level::Error:
		return { 0x0C, "Error" };
	case Logger::Level::Warning:
		return { 0x06, "Warning" };
	case Logger::Level::Info:
		return { 0x02, "Info" };
	case Logger::Level::Debug:
		return { 0x0B, "Debug" };
	default:
		return { 0x00, "" };
	}
}

void Logger::log(Logger::Level logLevel, const char* format, ...) {
#ifndef _DEBUG
    // 在非 DEBUG 模式下，跳过 Debug 日志
    if (logLevel == Logger::Level::Debug) return;
#endif

    char buffer[4096];

    va_list args;
    va_start(args, format);
    vsprintf_s(buffer, sizeof(buffer), format, args);
    va_end(args);

    auto prefix = getLevelPrefix(logLevel);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "[Wuwa_Echo:";
    SetConsoleTextAttribute(hConsole, prefix.color);
    std::cout << prefix.text;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "] " << buffer << "\n";
}

