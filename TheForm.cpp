#include "TheForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace AirInTheRoom;

[STAThreadAttribute]
Void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TheForm form;
	Application::Run(%form);
}