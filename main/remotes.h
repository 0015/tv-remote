
#ifndef REMOTES_H
#define REMOTES_H

#include "RemoteButtonSignal.h"


//specify a remote to contain all the buttons with namespace REMOTE_NAME
namespace RemoteTV
{ //panasonic N2QAYB 001179
    
    //Codes for remote buttons go here.
    //BUTTON(BUTTON_NAME, "CODE") creates a new button in the remote called BUTTON_NAME with the specified code.
    //Code must be in quotes.
    //Get codes by using receiver program and monitoring the output over usb. pressing a button on the actual remote
    //should result in it getting printed out.

    BUTTON(POWER, "");

    BUTTON(INPUT_AV, "");
    BUTTON(INPUT_TV, "");

    BUTTON(HOME, "");
    BUTTON(GUIDE, "");

    BUTTON(OK, "");
    BUTTON(RETURN, "");
    BUTTON(EXIT, "");
    BUTTON(INFO, "");

    BUTTON(NAV_LEFT, "");
    BUTTON(NAV_RIGHT, "");
    BUTTON(NAV_UP, "");
    BUTTON(NAV_DOWN, "");

    BUTTON(RED, "");
    BUTTON(GREEN, "");
    BUTTON(YELLOW, "");
    BUTTON(BLUE, "");

    BUTTON(VOL_UP, "");
    BUTTON(VOL_DOWN, "");
    BUTTON(VOL_MUTE, "");
    
    BUTTON(CHAN_UP, "");
    BUTTON(CHAN_DOWN, "");

    BUTTON(KEY_0, "86c40dc0819b01cd850701ce81a001cd81a001ce81a201cc81b801b581a001cd819f01ce819f01cf81a001ce819f01cf819f01ce819f01cf850e01cc819b01cd819a01cd819801cf819901cf819a01ce81b201b5819a01ce819a01ce819b01cc850701ce819b01cd81b301b5819a01cd819a01ce819a01cd819901cf819901ce819a01ce850801ce819a01ce819901ce850601cf850d01ce819b01cd819a01cd819b01cd850501cf819b01ce819801cf850701ce850601cf819f01d0819e01cf850d01ce800001ce");
    BUTTON(KEY_1, "86bf0dc0819a01ce850701ce819901cf819a01ce819a01cd819a01ce819901cf819901ce819a01ce819a01ce819901ce819901cf819b01cd850801cd81b201b6819a01ce819901ce819b01cd819701d081b101b881b201b581b101b6819a01ce850801ce81a001ce819f01cf81a001ce81b801b6819f01ce81b701b7819f01cf81b901b581a001cd81b901b581a001cd81b701b6852601b581b201b5819b01cd819801cf81b201b681b101b681b101b681b101b6852001b681b201b681b201b5852001b6800001b5");
    BUTTON(KEY_2, "86bc0dc0819901d0850801cd81b101b6819a01ce81b201b5819801d081b301b5819a01cd819a01cd819a01ce819a01ce819a01cd819901ce851a01bb819a01ce819b01cc819901ce819a01ce81b201b5819a01cd819a01cd819901ce81b201b5850601cf819f01ce819f01cf819f01ce819f01cf819f01ce819e01cf81a001cd81b901b5850d01cd81b201b5819a01ce819a01cd850801ce819901ce819b01cd819b01cc850601cf819901cf819a01ce819a01ce850801cc819f01d081a001cd850f01cd800001cd");
    BUTTON(KEY_3, "86c00dc0819901cd850601ce819a01ce819901cf819b01cd819901ce819b01cd819a01cd81b201b6819a01cd819a01ce819901cf819b01cc851301c2819a01ce819a01cd81b301b5819901ce81b201b6819b01cc819a01ce819a01cd819c01cc852101b581b901b581b801b581a001ce81ae01c081a001cd81a801c7819f01ce819f01ce81a101cd850d01ce81b201b681b101b6851001c581b201b681b201b681b201b5819a01ce852101b681b101b581b201b6851e01b781b601b881b701b7852301b8800001b7");
    BUTTON(KEY_4, "86c10dc1819b01cc850a01cd819901ce819a01ce819b01cd819a01cd819a01ce819a01ce819a01ce819a01cd819a01ce819a01ce819901ce850701ce819901d0819b01cd81b201b5819a01ce819901cf81b301b5819b01cd819901cf819901cf850801cd81b901b681a001cd81a001ce81a101cd819e01cf819f01cf81a001ce819f01ce850d01ce850701ce819901cf819901cf850801cd819901ce819901d0819901ce852001b6850c01ce819901ce81b201b6850801ce819a01ce819901ce852101b5800001cd");
    BUTTON(KEY_5, "86c70dbf819a01cf850801ce819f01ce819f01cf81a101cd81a101cd81a101cd819f01ce81b901b581a001ce81a001ce81a101ce81a001cd850c01ce819901d0819a01cd819b01cd819901cf819901ce819a01ce819901ce819a01ce819901ce850801ce819b01cd819901ce819901cf819901cf819801cf819a01ce819a01cd819901cf819b01cd819b01cd850901cc819901ce850801ce81a001ce81a001ce81a001cd819f01cf81a001ce850d01cd819901cf850801cd819a01ce819c01cc850801ce800001c2");
    BUTTON(KEY_6, "86c60dbf819901d0850901cd819d01cf81b701b781a001cd81a001ce819f01cf81a101cd81a001ce819f01ce81a101cd81b701b6819f01cf850e01cd819a01cd819a01ce819a01ce819a01ce81b301b5819901cf819a01ce819a01cd819901ce850701cf819b01cd819a01cd81b101b7819901ce819a01ce81af01b8819801cf81b101b7850701cd819901cf850701ce81a001ce850f01cc819901ce819a01ce819a01cd850701ce81b201b6850601cf819a01ce850701ce81b901b581a101cd850d01cd800001cf");
    BUTTON(KEY_7, "86c10dc1819901cf850701cf819901cf819a01ce819901ce819a01ce819901ce819a01ce819a01ce819901cf819801cf819b01ce819a01ce850901cd819a01ce819a01cd819a01ce819b01cd819c01cc819901cf819a01cd819a01ce819a01ce850801ce81a101cd819f01cf819f01ce81a101ce81a101cc81a001ce819f01cf819f01cf81a001ce852601b5850701cf819c01cc850901cd819a01ce819a01ce81b301b5819b01cd850801cd850d01cf819a01ce851f01b6819a01cf819a01ce850801cf800001b5");
    BUTTON(KEY_8, "86c60dbf819b01cd850701cd81a001cf81a001cd819f01ce81a001ce819f01cf81a001cd81a001ce81a001ce81a001cd819f01ce819f01cf850d01cd819a01ce819901cf819a01cd819901cf819b01cd819b01cd819a01cd819b01cd819901ce850801cd819a01cf81b301b4819a01ce819901ce819a01cd819c01cd81b001b7819a01cd852001b5850801cd850c01cf819a01ce850701ce819901cf819c01cc819c01cb850701ce852101b5850c01cf819b01cd850801cd819a01cd81b301b5850a01cc800001cd");
    BUTTON(KEY_9, "86c60dbf819e01ca851d01b7819e01d081b901b681b601b781a001cf819f01ce819f01cf81b801b781b701b681b701b781b801b681a101ce850b01cf819a01cf81b101b6819a01ce81ae01ba81b101b7819901cf819a01cf81b201b5819a01cf852101b5819b01cd81b101b781b001b781b101b7819b01ce81b201b681b101b6819901cf819a01ce81b201b781b101b5850701d0851f01b7819f01ce81b801b781a201cb81b701b781a001ce81a001cf850c01ce852001b7819a01ce819b01ce850a01cc800001cd");
};

#endif
