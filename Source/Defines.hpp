/*!***************************************************************************
@file    Defines.hpp
@author  Reverie Wisp
@par     Email: contact@rw0.pw
@date    11/19/2016

@brief
Lifted from my ASCIIPlayer project.

Usable under the "Don't be a Jerk" license, included in repo. Please respect
the individual requests of the authors of the externally included libraries.

FMOD Sound System, copyright © Firelight Technologies Pty, Ltd., 1994-2015.
*****************************************************************************/
#pragma once
#include "FMOD/fmod.hpp"
#include <iostream>



  //////////////////////////////
 // OS and Compiler-Specific //
//////////////////////////////
#if defined (DEBUG) | (_DEBUG)
  #define AP_DEBUG // As in, ascii-player debug
#endif


  //////////////////////////
 // Types and "Keywords" //
//////////////////////////
// Using
using ChannelHandle = FMOD::Channel*;     // Channel handle for FMOD
using AudioHandle   = FMOD::Sound;        // Sound object handle for FMOD
using Channelgroup  = FMOD::ChannelGroup; // Channel object handle for FMOD
using APUnique      = unsigned long long;

// Defines
#define DJ_ABSTRACT =0


  ///////////
 // Enums //
///////////
enum AudioDataStyle
{
  aSpectrum = 0,
  aWaveform = 1,
  
  aNO_STYLE
};

  /////////////////////////////////
 // Fun witchcr-- I mean macros //
/////////////////////////////////
// Debug Printing
#ifdef AP_DEBUG
  #define AP_DEBUG_PRINT_VAL 1
#else
  #define AP_DEBUG_PRINT_VAL 0
#endif
#define DEBUG_PRINT(x) do{ if(AP_DEBUG_PRINT_VAL) { std::cout << x << std::endl; } } while (0)

