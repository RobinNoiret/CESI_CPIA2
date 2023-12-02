/*#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name, we need to replace it
    Prosit5SaveTheCOde::MyForm form;
    Application::Run(% form);
}*/

//MyForm.cpp
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Prosit5SaveTheCOde::MyForm form;
    Application::Run(% form);
}


