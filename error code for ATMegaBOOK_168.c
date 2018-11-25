Arduino: 1.8.7 (Windows 10), Board: "Anet V1.0 (Optiboot)"

optiboot.c:199:2: error: invalid preprocessing directive #elsif

 #elsif F_CPU >= 1000000L

  ^

sketch\optiboot.c:200:0: warning: "BAUD_RATE" redefined

 #define BAUD_RATE   9600L   // 19200 also supported, but with significant error

 ^

sketch\optiboot.c:198:0: note: this is the location of the previous definition

 #define BAUD_RATE   115200L // Highest rate Avrdude win32 will support

 ^

optiboot.c:201:2: error: invalid preprocessing directive #elsif

 #elsif F_CPU >= 128000L

  ^

sketch\optiboot.c:202:0: warning: "BAUD_RATE" redefined

 #define BAUD_RATE   4800L   // Good for 128kHz internal RC

 ^

sketch\optiboot.c:200:0: note: this is the location of the previous definition

 #define BAUD_RATE   9600L   // 19200 also supported, but with significant error

 ^

optiboot.c:223:2: error: #error Unachievable baud rate (too slow) BAUD_RATE

 #error Unachievable baud rate (too slow) BAUD_RATE 

  ^

sketch\ATmegaBOOT_168.c: In function 'main':

ATmegaBOOT_168.c:440:12: error: 'NUM_LED_FLASHES' undeclared (first use in this function)

  flash_led(NUM_LED_FLASHES + bootuart);

            ^

sketch\ATmegaBOOT_168.c:440:12: note: each undeclared identifier is reported only once for each function it appears in

sketch\ATmegaBOOT_168.c: In function 'getch':

ATmegaBOOT_168.c:968:16: error: 'MAX_TIME_COUNT' undeclared (first use in this function)

    if (count > MAX_TIME_COUNT)

                ^

exit status 1
invalid preprocessing directive #elsif

This report would have more information with
"Show verbose output during compilation"
option enabled in File -> Preferences.
