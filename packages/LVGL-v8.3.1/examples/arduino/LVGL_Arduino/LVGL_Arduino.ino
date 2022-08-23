#include <lvgl.h>

#include <lv_examples.h>

#include <lv_demos.h>

#define LV_USE_LOG 1
#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif


void setup()
{
    Serial.begin( ); /* prepare for possible serial debug */

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    LOG_I("passei 1");

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

}

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
     LOG_I("passei 2");
    delay( 5000 );
}
