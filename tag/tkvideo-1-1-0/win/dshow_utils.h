
#ifndef _DSHOW_UTILS_H_INCLUDE
#define _DSHOW_UTILS_H_INCLUDE

#include <atlbase.h>
#include <dshow.h>

#define CAPTURE_FILTER_NAME   L"Capture Filter"
#define SAMPLE_GRABBER_NAME   L"Sample Grabber"
#define RENDERER_FILTER_NAME  L"Renderer"

HRESULT ShowPropertyPages(LPUNKNOWN Object, LPCOLESTR Caption = NULL, HWND hwnd = NULL);
HRESULT GetDeviceMoniker(int DeviceIndex, IMoniker **ppMoniker);
HRESULT GetDeviceName(int DeviceIndex, BSTR *pstrName);
HRESULT GetDeviceID(int DeviceIndex, BSTR *pstrName);
HRESULT FindPinByName(IBaseFilter *pFilter, LPCWSTR sID, LPCWSTR sName, IPin **ppPin);
HRESULT FindPinByCategory(IBaseFilter *pFilter, REFGUID Category, IPin **ppPin);
HRESULT FindPinByDirection(IBaseFilter *pFilter, PIN_DIRECTION eDirection, IPin **ppPin);
HRESULT FindGraphInterface(IGraphBuilder *pGraphBuilder, LPCWSTR pstrFilter, REFIID riid, void **ppif);
HRESULT RegisterFilterGraph(IFilterGraph *pFilterGraph, DWORD *lpdwCookie);
HRESULT UnregisterFilterGraph(DWORD dwCookie);
HRESULT SaveFilterGraph(IFilterGraph *pFilterGraph, BSTR sFilename);
HRESULT LoadFilterGraph(BSTR sFilename, IFilterGraph **ppFilterGraph);
BOOL    GetRGBBitsPerPixel(HDC hdc, PINT pRed, PINT pGreen, PINT pBlue);

#endif // _DSHOW_UTILS_H_INCLUDE
