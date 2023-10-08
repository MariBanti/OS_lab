#include <Windows.h>
#include <stdio.h>
#include <iostream>

BOOL WINAPI HandlerRoutine(DWORD ctrlType) {
	switch (ctrlType)
	{
	case CTRL_CLOSE_EVENT:
		std::cout << "CTRL close event" << std::endl;
		break;
	case CTRL_C_EVENT:
		std::cout << "CTRL+c event" << std::endl;
		break;
	default:
		break;
	}
	return false;
}

int main() {
	while (SetConsoleCtrlHandler(HandlerRoutine, true)) {
		continue;
	}
	return 0;
}