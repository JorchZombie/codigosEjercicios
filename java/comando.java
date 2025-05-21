//librerias
import java.util.Scanner;

public class comando {
//variables
Scanner teclado = new Scanner(System.in);
int num1, num2, suma, multi, resul;

    static void main(){
        System.out.println("Dame un numero");
        num1 = teclado.nextInt();

        System.out.println("dame el segundo numero: ");
        num2 = teclado.nextInt();
    }
}
