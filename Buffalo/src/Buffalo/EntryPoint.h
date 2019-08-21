#pragma once

#ifdef BF_PLATFORM_WINDOWS

#endif
extern Buffalo::Application* Buffalo::CreateApplication();

int main(int argc, char** argv) {
	Buffalo::Log::Init();
	BF_CORE_WARN("Initialized Log!");
	int a = 5;
	BF_CLIENT_INFO("Hello! V={0}", a);
	 
	auto app = Buffalo::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
