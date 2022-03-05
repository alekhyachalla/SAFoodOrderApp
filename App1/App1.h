// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APP1_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APP1_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include<iostream>
#ifdef APP1_EXPORTS
#define APP1_API __declspec(dllexport)
#else
#define APP1_API __declspec(dllimport)
#endif

// This class is exported from the dll
class APP1_API CApp1 {
public:
	CApp1(void);
	// TODO: add your methods here.
};

extern APP1_API int nApp1;

APP1_API int fnApp1(void);
namespace App1Ordernamespace {
	class APP1_API Orders {
	public:
		static std::string placeOrder(std::string name);
		static std::string orderDelivery(std::string name);

	};
}
