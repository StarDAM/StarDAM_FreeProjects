#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){

    int distancia = 0;
    long n;
    char dos[15][11] = {
        {"Geodude"},
        {"Bulbasaur"},
        {"Clefairy"},
        {"Charmander"},
        {"Squirtle"},
        {"Pikachu"},
        {"Caterpie"},
        {"Weedle"},
        {"Pidgey"},
        {"Magikarp"},
        {"Rattata"},
        {"Spearow"},
        {"Jigglypuff"},
        {"Zubat"}};

    char cinco[44][11] = {{"Meowth"},{"Ekans"},{"Sandshrew"},{"Bellsprout"},{"Vulpix"},{"Kangaskhan"},{"Oddish"},{"Paras"},{"Growlithe"},{"Venonat"},{"Diglett"},{"Grimer"},
        {"Gastly"},{"Psyduck"},{"Shellder"},{"Cubone"},{"Koffing"},{"Mankey"},
        {"Poliwag"},{"Abra"},{"Krabby"},{"Machop"},{"Tentacool"},{"Ponyta"},{"Exeggcute"},
        {"Porygon"},{"Slowpoke"},{"Nidoran"},{"Magnemite"},{"Goldeen"},{"Farfetch"},
        {"Doduo"},{"Seel"},{"Drowzee"},{"Voltorb"},{"Nidoran"},{"Lickitung"},{"Rhyhorn"},{"Tangela"},
        {"Horsea"},{"Staryu"},{"Mr. Mime"},{"Tauros"}};

    char diez[17][11] = {
        {"Scyther"},
        {"Onix"},
        {"Aerodactyl"},
        {"Lapras"},
        {"Kabuto"},
        {"Hitmonchan"},
        {"Chansey"},
        {"Jynx"},
        {"Electabuzz"},
        {"Magmar"},
        {"Pinsir"},
        {"Dratini"},
        {"Eevee"},
        {"Omanyte"},
        {"Snorlax"},
        {"Hitmonlee"}};





    srand(time(NULL));
    n=rand();

    system("clear");
    printf("Introduce una distancia: 2/5/10\n");
    printf("En KMs:");
    scanf("%d", &distancia);

    if(distancia == 2){
        system("clear");
        printf("¡Anda!");
        for(int i; i<3; i++){
            fflush(stdout);
            sleep(1);
            printf(".");
        }
        printf("\n");
        printf("Has conseguido un: ");
        printf("¡");
        for(int i; i<10; i++){
            printf("%c", dos[n%15][i]);
        }
        printf("!");
        printf("\n"); 
        return EXIT_SUCCESS;
    }
    if(distancia == 5){
        system("clear");
        printf("¡Anda!");
        for(int i; i<3; i++){
            fflush(stdout);
            sleep(1);
            printf(".");
        }
        printf("\n");
        printf("Has conseguido un: ");
        printf("¡");
        for(int i; i<10; i++){
            printf("%c", cinco[n%15][i]);
        }
        printf("!");
        printf("\n"); 
        return EXIT_SUCCESS;


    }
    if(distancia == 10){
        system("clear");   
        printf("¡Anda!");
        for(int i; i<3; i++){
            fflush(stdout);
            sleep(1);
            printf(".");
        }
        printf("\n");
        printf("Has conseguido un: ");
        printf("¡");
        for(int i; i<10; i++){
            printf("%c", diez[n%15][i]);
        }
        printf("!");
        printf("\n"); 
        return EXIT_SUCCESS;


    }
    else
        system("clear");
    printf("Distancia Incorrecta.");
    return EXIT_FAILURE;
}
