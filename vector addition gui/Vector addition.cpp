#include "Vector addition.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	vectoradditiongui::Vectoraddition myForm;
	Application::Run(%myForm);
}