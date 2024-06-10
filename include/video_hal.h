#include <config.h>
#elif HAVE_ARM_HARDWARE
#include "../libarmbox/video_lib.h"
#include "../libarmbox/hdmi_cec.h"
#elif HAVE_MIPS_HARDWARE
#include "../libmipsbox/video_lib.h"
#include "../libmipsbox/hdmi_cec.h"
#elif HAVE_GENERIC_HARDWARE
#if BOXMODEL_RASPI
#include "../libraspi/video_lib.h"
#else
#include "../libgeneric-pc/video_lib.h"
#endif
#else
#error no valid hardware defined
#endif

#if STB_HAL_VIDEO_HAS_GETSCREENIMAGE
#define SCREENSHOT 1
#endif
