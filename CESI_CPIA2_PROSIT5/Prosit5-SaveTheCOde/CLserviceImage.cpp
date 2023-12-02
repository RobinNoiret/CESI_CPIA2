//CLserviceImage.cpp
#include "CLserviceImage.h"

namespace NS_services
{
	CLserviceImage::CLserviceImage(void)
	{
		this->image = gcnew NS_composants::CLimages();
	}
	System::Drawing::Bitmap^ CLserviceImage::lireImage(String^ fichier)
	{
		return this->image->acquisitionImage(fichier);
	}
}
