#pragma once

#include "Core.h"


namespace Buffalo {

	class BUFFALO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}