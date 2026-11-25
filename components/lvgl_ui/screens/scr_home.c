    /* scr_home.c */
#include "scr_home.h"
#include "screens.h"
#include "ui.h"   /* acceso a ui_scrHome, ui_lblTitulo, etc. */
#include "esp_log.h"

static const char *TAG = "scr_home";

void scr_home_prepare(void)
{
    /* Registra callbacks persistentes en widgets que sobreviven entre pantallas.
     * Ejemplo:
     *   lv_obj_add_event_cb(ui_btnVolver, on_volver_cb, LV_EVENT_CLICKED, NULL);
     */
}

void scr_home_init(void)
{
    /* Refresca contenido dinámico al entrar en la pantalla.
     * Ejemplo:
     *   lv_slider_set_value(ui_sliderBrillo, brillo_actual, LV_ANIM_OFF);
     */
    ESP_LOGD(TAG, "init");
}

void scr_home_uninit(void)
{
    /* Detén animaciones o timers locales al salir. */
    ESP_LOGD(TAG, "uninit");
}

void scr_home_step(void)
{
    /* Lógica cada ~20 ms. Evita bloqueos. */
}