/*
     8888888b.                  888     888 d8b
     888   Y88b                 888     888 Y8P
     888    888                 888     888
     888   d88P 888d888  .d88b. Y88b   d88P 888  .d88b.  888  888  888
     8888888P"  888P"   d88""88b Y88b d88P  888 d8P  Y8b 888  888  888
     888        888     888  888  Y88o88P   888 88888888 888  888  888
     888        888     Y88..88P   Y888P    888 Y8b.     Y88b 888 d88P
     888        888      "Y88P"     Y8P     888  "Y8888   "Y8888888P"


             PE Editor & Dissasembler & File Identifier
             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   
 Written by Shany Golan.
 In januar, 2003.
 I have investigated P.E. file format as thoroughly as possible,
 But I cannot claim that I am an expert yet, so some of its information  
 May give you wrong results.

 Language used: Visual C++ 6.0
 Date of creation: July 06, 2002

 Date of first release: unknown ??, 2003

 You can contact me: e-mail address: Shanytc@yahoo.com

 Copyright (C) 2011. By Shany Golan.

 Permission is granted to make and distribute verbatim copies of this
 Program provided the copyright notice and this permission notice are
 Preserved on all copies.


 File: Patcher.h (main)
   This program was written by Shany Golan, Student at :
                    Ruppin, department of computer science and engineering University.
*/

#ifndef _PATCHER_H_
#define _PATCHER_H_

// ================================================================
// ========================== INCLUDES ============================
// ================================================================

#include <windows.h>
#include "x64.h"
#include "resource\resource.h"
#include <richedit.h>
#include <commctrl.h>
#include "CDisasmData.h"
#include "Functions.h"
#include "Disasm.h"
#include <vector> // STL

// ================================================================
// =========================  FUNCTIONS  ==========================
// ================================================================

BOOL CALLBACK PatcherProc	( HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam	);
BOOL GoodChars				( DWORD_PTR wParam										);

// ================================================================
// =========================  SUB CLASSES  ========================
// ================================================================

LRESULT CALLBACK PatcherSubClass ( HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam );

#endif