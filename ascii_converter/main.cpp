#include <Windows.h>
#include "main.h"
#pragma comment( lib, "user32.lib" )

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
BOOL WINAPI WinMain( HINSTANCE, HINSTANCE, LPSTR, INT ) {
	Application::Run( gcnew ascii_converter::main );
	return TRUE;
}