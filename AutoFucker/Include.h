#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <map>
#include <string.h>
#include <vector>
#include <ctffunc.h>
#include <textstor.h>
#include <imm.h>
#include <fstream>
#include <codecvt>
#include <WinUser.h>
#include <filesystem>
#include <shlobj.h>
#include <sstream>
#include <experimental/filesystem>
#include <cstdlib>
#include <tlhelp32.h>
#include <random>
#include <locale>
#include <stdexcept>
#include <winternl.h>

#pragma comment(lib, "imm32.lib") // 链接到输入法管理器的动态链接库

enum class EncodingType {
	ANSI,
	UTF8,
	UTF16_LE,
	UTF16_BE,
	UTF32_LE,
	UTF32_BE,
	UNKNOWN
};

using namespace std;

int typing_delay = 50;
int setPressMs;
string EnableInputSettings;
string isRandomMs;
int MaxPressMs;

using std::vector;
using std::string;
bool DebugSpeedEnable = false;
typedef NTSTATUS(NTAPI* pNtQueryInformationProcess)(
	IN HANDLE ProcessHandle,
	IN PROCESSINFOCLASS ProcessInformationClass,
	OUT PVOID ProcessInformation,
	IN ULONG ProcessInformationLength,
	OUT PULONG ReturnLength OPTIONAL
	);


