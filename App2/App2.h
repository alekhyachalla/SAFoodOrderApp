// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APP2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APP2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef APP2_EXPORTS
#define APP2_API __declspec(dllexport)
#else
#define APP2_API __declspec(dllimport)
#endif

// This class is exported from the dll
class APP2_API CApp2 {
public:
	CApp2(void);
	// TODO: add your methods here.
};

extern APP2_API int nApp2;

APP2_API int fnApp2(void);
namespace App2CancellationNamespace {
	class APP2_API App2CancellationClass {
	public:
		static void CancellationSurvey();

	};
}
