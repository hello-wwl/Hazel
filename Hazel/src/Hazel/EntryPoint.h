#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int agrc, char** argv)
{

	printf("Hazel start\n");
	auto app = Hazel::CreateApplication();
	app->run();

	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
