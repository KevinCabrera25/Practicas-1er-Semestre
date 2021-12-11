// HelloWindowsDesktop.cpp
// Kevin de Jesús Velázquez Cabrera
// En esta práctica crearemos nuestra primera app de ventana de Windows para Escritorio

#include <windows.h> // Requerido para toda Windows Desktop Program
#include <stdlib.h>
#include <string.h>
#include <tchar.h> // Define el macor TCHAR

// Global variables

// The main window class name.
static TCHAR szWindowClass[] = _T("DesktopApp");

// The string that appears in the application's title bar.
static TCHAR szTitle[] = _T("Windows Desktop Guided Tour Application");

HINSTANCE hInst;

// Forward declarations of functions included in this code module:
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


int WINAPI WinMain // Esta es la funcion main de cada app de Windows Desktop
(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR     lpCmdLine,
	_In_ int       nCmdShow
)

{
	WNDCLASSEX wcex; // Se agrega funcionalidad a la función WinMaiin con una estructura

	wcex.cbSize = sizeof(WNDCLASSEX); // Tamaño en bytes de la estructura
	wcex.style = CS_HREDRAW | CS_VREDRAW; // Estilos de clase
	wcex.lpfnWndProc = WndProc; // Puntero a la Ventana de Procedimientos
	wcex.cbClsExtra = 0; // No. extra de bytes asignados seguido del tipo de ventana de la estructura
	wcex.cbWndExtra = 0; // No. extra de bytes asignados seguido de la instancia de la ventana
	wcex.hInstance = hInstance; // Referencia a la instancia que contiene la Ventana de Procedimientos
	wcex.hIcon = LoadIcon(wcex.hInstance, IDI_APPLICATION); // Referencia a la clase icono
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW); // Referencia al cursor
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1); // Referencia a la clase de brocha del fondo
	wcex.lpszMenuName = NULL; // Puntero a string, especifíca el nombre del recurso de la clase del menú 
	wcex.lpszClassName = szWindowClass; // Puntero a string, especifíca el nombre de la clase de Ventana
	wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION); // Referencia al icono asociado con la clase de la ventana

	if (!RegisterClassEx(&wcex)) // Registro de la clase WNDCLASSEX con Windows para comunicarse con el Sistema 
	{							// y la Ventana de la app		
		MessageBox(NULL,
			_T("Call to RegisterClassEx failed!"),
			_T("Windows Desktop Guided Tour"),
			NULL);

		return 1;
	}

	// Creando una ventana
	// Store instance handle in our global variable
	hInst = hInstance;
		
	HWND hWnd = CreateWindowEx
	(
		WS_EX_OVERLAPPEDWINDOW, // An optional extended window style.
		szWindowClass, // The name of the application
		szTitle, // The text that appears in the title bar
		WS_OVERLAPPEDWINDOW, // The type of window to create
		CW_USEDEFAULT, CW_USEDEFAULT, // Initial position (x, y)
		500, 100, // Initial size (width, length)
		NULL, // Reference to the parent of this window
		NULL, // This app does not have a menu bar
		hInstance, // First parameter from WinMain
		NULL // Not used in this app
	);

	if (!hWnd)
	{
		MessageBox(NULL,
			_T("Call to CreateWindow failed!"),
			_T("Windows Desktop Guided Tour"),
			NULL);

		return 1;
	}
	// Haciendo la ventana visible
	
	ShowWindow(hWnd, // Value returned from CreateWindow
		nCmdShow); // Fourth parameter from WinMain
	UpdateWindow(hWnd);

	// Ciclo principal de mensaje
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}

//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//  PURPOSE:  Processes messages for the main window.

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	// Mensaje WM_PAINT para poder recibir información de cuándo se deberán actualizar 
	// algunas partes de ventana desplegada.
	PAINTSTRUCT ps;
	HDC hdc; // Referncia al contexto del dispositivo, usado para dibujar sobre la ventana del cliente
	TCHAR greeting[] = _T("Hello, Windows desktop!");

	switch (message)
	{
	case WM_PAINT: // Paint the main window
		hdc = BeginPaint(hWnd, &ps); // Regresa referencia de la pantalla del dispositivo
									 // para dibujar sobre la ventana del cliente
									 
		// Here your application is laid out.
		// For this introduction, we just print out "Hello, Windows desktop!"
		// in the top left corner.
		TextOut(hdc,
			5, 5,
			greeting, _tcslen(greeting));
		// End application-specific layout section.

		EndPaint(hWnd, &ps); // Termina la solicitud de dibujar y libera el contexto del dispositivo
		break;

	case WM_DESTROY: // Referencia para cuando la ventana sea cerrada, después de un mensaje de cierre
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}

	return 0;
}
	










