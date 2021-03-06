#pragma once

#include <string>

namespace Web
{
	namespace Ui
	{
		namespace WebVirtualKeyboard
		{
			void Init();
			void Submit(const std::wstring& value);
			void Cancel();
		}
	}
}
