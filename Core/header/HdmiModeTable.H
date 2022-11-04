//----------------------------------------------------------------------------------------------------
// ID Code      : HdmiModeTable.h No.0000
// Update Note  :
//
//----------------------------------------------------------------------------------------------------

//--------------------------------------------------
// Mode Define
// We have two kind of mode set. One is Preset mode
// and another is User mode. If you have to add a new
// mode, please add it into "Preset Mode" and modify
// the defination of _MAX_PRESET_MODE.
//--------------------------------------------------
#define _MAX_HDMI_PRESET_MODE            56


#define _MODE_FIRST                 252
#define _MODE_EXIST                 253
#define _MODE_NOSUPPORT             254
#define _MODE_NOSIGNAL              255

//--------------------------------------------------
// Hdmi Preset Mode
//--------------------------------------------------
enum HdmiPresetModeDef
{
    _MODE_640x480P_60HZ = 0,        // Mode 00:
    _MODE_720x240P_60HZ,            // Mode 01:
    _MODE_720x288P_50HZ,            // Mode 02:
    _MODE_720x480P_60HZ,            // Mode 03:
    _MODE_720x480I_60HZ,            // Mode 04:
    _MODE_720x576P_50HZ,            // Mode 05:
    _MODE_720x576I_50HZ,            // Mode 06:
    _MODE_1280x720P_50HZ,           // Mode 07:
    _MODE_1280x720P_60HZ,           // Mode 08:
    _MODE_1440x480P_60HZ,           // Mode 09:
    _MODE_1440x576P_50HZ,           // Mode 10:
    _MODE_1920x1080P_50HZ,          // Mode 11:
    _MODE_1920x1080P_60HZ,          // Mode 12:
    _MODE_1920x1080I_50HZ,          // Mode 13:
    _MODE_1920x1080I_60HZ,          // Mode 14:
    _MODE_2880x240P_60HZ,           // Mode 15:
    _MODE_2880x288P_50HZ,           // Mode 16:
    _MODE_2880x480I_60HZ,           // Mode 17:
    _MODE_2880x576I_50HZ,           // Mode 18:
};
//--------------------------------------------------
// Defination of Mode Detection Tolerance
//--------------------------------------------------
#define _HFREQ_TOLERANCE            10      // kHz. Ex: 1.5kHz ==> 15
#define _VFREQ_TOLERANCE            10      // Hz.  Ex: 1.5Hz ==> 15


//--------------------------------------------------
// Defination of Mode Polarity
//--------------------------------------------------
#define _SYNC_HN_VN                 0x01
#define _SYNC_HP_VN                 0x02
#define _SYNC_HN_VP                 0x04
#define _SYNC_HP_VP                 0x08
