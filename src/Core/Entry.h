#pragma once

#ifdef DS_PLATFORM_WINDOWS
	
extern DoomStyle::App* DoomStyle::CreateApp();

int main(int argc, char** argv) {
	auto app = DoomStyle::CreateApp();
	app->Run();
	delete app;
}

#endif