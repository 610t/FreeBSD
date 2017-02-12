--- Sound.c.orig	1999-03-19 18:14:35 UTC
+++ Sound.c
@@ -101,11 +101,7 @@ static unsigned char dsp_ulaw[256] = {
 
 #else /* SUN_AUDIO */
 
-#ifdef LINUX
-#include <linux/soundcard.h>
-#else
-#include <soundcard.h>
-#endif
+#include <sys/soundcard.h>
 
 #define AUDIO_CONV(A) (128+(A))
 
