#pragma once

#ifdef BF_PLATFORM_WINDOWS

extern Buffalo::Application* Buffalo::CreateApplication();

int main(int argc, char** argv) {

	printf("Buffalo Engine!\n");
	auto app = Buffalo::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
#endif