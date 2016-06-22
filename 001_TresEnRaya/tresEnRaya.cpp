#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "juego.h"

#define PANTALLA_X 800
#define PANTALLA_Y 600
#define CUADROS 9
#define FPS 20.

int main(int argc, const char **argv){

    /*Variables (con allegro)*/
    Cuadro cuadro[CUADROS];
    ALLEGRO_DISPLAY *ventana = NULL;
    ALLEGRO_BITMAP *cuadroVacio = NULL;
    ALLEGRO_BITMAP *cuadro_X = NULL;
    ALLEGRO_BITMAP *cuadro_O = NULL;
    ALLEGRO_EVENT_QUEUE *evento = NULL;
    ALLEGRO_TIMER *reloj = NULL;
    bool redraw = true;
    /*(Crear) Iniciar allegro sin mensajes de error*/
    al_init();
    al_init_image_addon();
    al_install_mouse();
    ventana = al_create_display(PANTALLA_X, PANTALLA_Y);
    reloj = al_create_timer(1.0 / FPS);
    evento = al_create_event_queue();
    /*Cargar sprites*/
    cuadroVacio = al_load_bitmap("Imagenes/cuadroVacio.png");
    cuadro_X = al_load_bitmap("Imagenes/cuadroO.png");
    cuadro_O = al_load_bitmap("Imagenes/cuadroX.png");
    al_set_target_bitmap(cuadroVacio);
    al_set_target_bitmap(cuadro_X);
    al_set_target_bitmap(cuadro_O);
    /*Registrar eventos*/
    al_register_event_source(evento, al_get_display_event_source(ventana));
    al_register_event_source(evento, al_get_mouse_event_source());
    al_register_event_source(evento, al_get_timer_event_source(reloj));
    /*Iniciar*/
    al_start_timer(reloj);
    /*BUCLE*/
    while(1){
        ALLEGRO_EVENT ev;
        al_wait_for_event(evento, &ev);

        if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;
    }


    /*Destruir*/
    al_destroy_display(ventana);
    al_destroy_timer(reloj);
    al_destroy_event_queue(evento);
    al_destroy_bitmap(cuadro_X);
    al_destroy_bitmap(cuadro_O);
    al_destroy_bitmap(cuadroVacio);

    return EXIT_SUCCESS;
}
