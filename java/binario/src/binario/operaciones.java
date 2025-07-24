//paquetes
package binario;
//Librerias
import java.util.Scanner;

public class operaciones {
    Scanner teclado = new Scanner(System.in);
    int vec[]=new int[8];
    String bin; //aqui se alamacena el numero binario

    void IngresarTexto(){
        System.out.print("Ingresa un numero binario (max 8 caracteres, silo 1 y 0): ");
        bin = teclado.next();
        if(!bin.matches("[01]+") || bin.length() > 8){
            System.out.println("Entreda Invalida");
             return;
        }//termina if

        while(bin.length() < 8){
            bin = "0"+bin;
        }//termina while

        for(int i=0;i<8;i++){
            vec[i]=Character.getNumericValue(bin.charAt(i));
        }//termina for
    }//termina IngresarTexto

    void resultado() {
        int bits[] = {128, 64, 32, 16, 8, 4, 2, 1}; // vector con los bits
        int resul = 0;

        for (int i = 0; i < 8; i++) { //for 1
            if (vec[i] == 1) {
                resul += bits[i];
            }//termina if
        }//termina for
        System.out.print(resul);
    }//termina relsutado
}//termina class operaciones
