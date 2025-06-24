#include <windows.h>

// Simple exported function to test export visibility
extern "C" __declspec(dllexport) int GetPluginInfo() {
    return 1;
}
