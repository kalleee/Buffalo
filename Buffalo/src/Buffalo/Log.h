#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "Core.h"


namespace Buffalo {

	class BUFFALO_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core Log macros
#define BF_CORE_TRACE(...) ::Buffalo::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BF_CORE_INFO(...)  ::Buffalo::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BF_CORE_WARN(...)  ::Buffalo::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BF_CORE_ERROR(...) ::Buffalo::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BF_CORE_FATAL(...) ::Buffalo::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log macros
#define BF_CLIENT_TRACE(...) ::Buffalo::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BF_CLIENT_INFO(...)  ::Buffalo::Log::GetClientLogger()->info(__VA_ARGS__)
#define BF_CLIENT_WARN(...)  ::Buffalo::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BF_CLIENT_ERROR(...) ::Buffalo::Log::GetClientLogger()->error(__VA_ARGS__)
#define BF_CLIENT_FATAL(...) ::Buffalo::Log::GetClientLogger()->fatal(__VA_ARGS__)
