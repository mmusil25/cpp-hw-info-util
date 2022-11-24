#include <windows.h>
#include <stdio.h>
#pragma comment(lib,"user32.lib")

int main()
{
	SYSTEM_INFO siSysInfo;

	// Copy the hardware information to the SYSTEM_INFO structure

	GetSystemInfo(&siSysInfo);

	// Display the contents of the SYSTEM_INFO structure

	printf("Hardware Information: \n")
	printf("	OEM ID: %u\n", siSysInfo.dwOeMId);
	printf("	Number of Processors : % u \n",
		siSysInfo.dwNumberOfProcessors);
	printf("	Page size: %u \n", siSysInfo.dwPageSiaze);
	printf("	Minimum application address: %lx\n", 
		siSysInfo.lpMinimumApplicationAddress);
	printf("	Maximum application address: %lx\n",
		siSysInfo.lpMaximumApplicationAddress);
	printf("	Active processor mask: %u\n", 
		siSysInfo.dwActiveProcessorMask);
		
	return 0;
}
