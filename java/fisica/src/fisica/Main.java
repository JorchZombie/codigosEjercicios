package fisica;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int vel, acelera, tiem;
        int a,b,c,d;

        fisicaopera f = new fisicaopera(0, 0, 0);
            System.out.println("Distancia\n");
            System.out.print("Ingresa la velocidad inicial: ");
            vel = teclado.nextInt();
            System.out.print("Ingresa el tiempo: ");
            tiem = teclado.nextInt();
            System.out.print("Ingresa la aceleracion: ");
            acelera = teclado.nextInt();
            f.distancia(vel, tiem,acelera);
            System.out.println("\n");

            System.out.println("tiempo\n");
            System.out.print("Ingresa la velocidad Inicial: ");
            tiem = teclado.nextInt();
            System.out.print("Ingresa la velocidad final: ");
            vel = teclado.nextInt();
            System.out.print("Ingresa la aceleracion: ");
            acelera = teclado.nextInt();
            f.tiempo(tiem, vel, acelera);
            System.out.println("\n");

            System.out.println("velocidad\n");
            System.out.print("Ingresa la velocidad Inicial: ");
            vel = teclado.nextInt();
            System.out.print("Ingresa la aceleracion: ");
            acelera = teclado.nextInt();
            System.out.print("Ingresa el timepo: ");
            tiem = teclado.nextInt();
            f.velocidad(vel, acelera, tiem);
            System.out.println("\n");

        geometria g = new geometria(1, 1, 1, 1);
            System.out.println("Distancia entre dos Puntos\n");
            System.out.print("Ingresa el valor de x1: ");
            a = teclado.nextInt();
            System.out.print("Ingresa el valor de y1: ");
            b = teclado.nextInt();
            System.out.print("Ingresa el valor de x2: ");
            c = teclado.nextInt();
            System.out.print("Ingresa el valor de y2: ");
            d = teclado.nextInt();
            g.disPuntos(a,b,c,d);
            System.out.println("\n");

            System.out.println("Pendiente\n");
            System.out.print("Ingresa el valor de x1: ");
            a = teclado.nextInt();
            System.out.print("Ingresa el valor de y1: ");
            b = teclado.nextInt();
            System.out.print("Ingresa el valor de x2: ");
            c = teclado.nextInt();
            System.out.print("Ingresa el valor de y2: ");
            d = teclado.nextInt();
            g.pendiente(a,b,c,d);
            System.out.println("\n");

            System.out.println("Punto Medio\n");
            System.out.print("Ingresa el valor de x1: ");
            a = teclado.nextInt();
            System.out.print("Ingresa el valor de y1: ");
            b = teclado.nextInt();
            System.out.print("Ingresa el valor de x2: ");
            c = teclado.nextInt();
            System.out.print("Ingresa el valor de y2: ");
            d = teclado.nextInt();
            g.puntoMedio(a,b,c,d);
            System.out.println("\n");

        }
    }