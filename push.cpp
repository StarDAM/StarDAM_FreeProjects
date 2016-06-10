#include <stdlib.h>
#include <stdio.h>
    extern int systemMenu();
    extern void clear();
    extern int main();

     int Addcambios(){
        clear();
        printf("\t ¿Qué deséa hacer?\n");
        printf("1. Añadir cambios.\n");
        return EXIT_SUCCESS;
     }
   
     int Checkeo(int valor){
       
        //if(scanf("%d", &valor) != 1) return EXIT_SUCCESS;            
        if(valor == 1){
            printf("pene");
            clear();
            Addcambios();
        }
        if(valor == 2){
            clear();
  //          ShowChanges();
        }
        if(valor == 3){
            clear();
    //        branch();
        }
        if(valor == 4){
            clear();
      //      commit();
        }
        if(valor == 5){
            clear();
        //    push();
        }
        if(valor == 6){
            clear();
          //  pull();
        }
        if(valor == 7){
            return EXIT_SUCCESS;
        }
        else{
           systemMenu();
        }
        return EXIT_FAILURE;

    }

    void clear(){
        system("clear");
    }

    int systemMenu(){
        int valor;
        clear();
        printf("\t ¿Qué deséa hacer?\n");
        printf("1. Añadir cambios.\n");
        printf("2. Ver cambios.\n");
        printf("3. Cambiar rama.\n");
        printf("4. Añadir mensaje.\n");
        printf("5. Subir Cambios.\n");
        printf("6. Actuaizar Respositorio.\n");
        printf(".Pulsa cualquier botón para salir.\n");
        printf("-----------------------------\n");
        printf("Introduce un número:");

        Checkeo(valor);

        return EXIT_FAILURE;
    }

    int main() {
        clear();
        systemMenu();
    }
