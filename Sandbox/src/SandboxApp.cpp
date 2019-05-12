#include <Buffalo.h>

class Sandbox : public Buffalo::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Buffalo::Application* Buffalo::CreateApplication() {
	return new Sandbox();
}