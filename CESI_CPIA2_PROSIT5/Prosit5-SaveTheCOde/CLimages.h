//CLimages.h
#pragma once

using namespace System;
using namespace System::Drawing; // Include System::Drawing for Bitmap

namespace NS_composants
{
	public ref class CLimages
	{
	public:
		Bitmap^ acquisitionImage(String^); // Correction to the return type
	};
}

