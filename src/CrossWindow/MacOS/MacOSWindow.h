#pragma once

#include "../Common/WindowDesc.h"

namespace xwin
{
	class MacWindow
	{
	public:
		MacWindow();
		
		~MacWindow();
		
		bool create(const WindowDesc& desc);
		
		void destroy();
		
		bool eventLoop();
		
	protected:
		int pool;
		int app;
		int window;
	};
	
	typedef MacWindow WindowDelegate;
}


