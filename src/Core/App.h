#pragma once

#include "Core.h"

namespace DoomStyle {
	class DOOM_STYLE_API App {
	public:
		App();
		virtual ~App();

		void Run();
	};

	// -- To be initialized by applications and not core engine --- //
	App* CreateApp();
}