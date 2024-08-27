#include <windows.h>
void clean_console(HANDLE console_handle, bool be_full_size)
{
	CONSOLE_CURSOR_INFO struct_cursor_info;
	GetConsoleCursorInfo(console_handle, &struct_cursor_info);
	struct_cursor_info.bVisible = FALSE;
	SetConsoleCursorInfo(console_handle, &struct_cursor_info);
	if (be_full_size)
	{
		keybd_event(VK_MENU, 0x38, 0, 0);
		keybd_event(VK_RETURN, 0x1c, 0, 0);
		keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
		keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
	}
}