package fisica;

public class geometria extends matematicas{

    public geometria (int x1, int y1, int x2, int y2){
        super(x1,y1,x2,y2);
    }

    void disPuntos (int x1, int y1, int x2, int y2){
        double dista;
        dista = Math.sqrt(Math.pow(x2-x1,2) + Math.pow(y2-y1,2));
        System.out.print("la distancia de dos puntos es: " + dista);
    }

    void pendiente(int x1, int y1, int x2, int y2){
        double pendi;
        pendi = (double) (y2 - y1) /(x2-x1);
        System.out.print("la pendiente es: " + pendi);
    }

    void puntoMedio (int x1, int y1, int x2, int y2){
        double r1, r2;
        r1 = (x1 + x2) /2.0;
        r2 = (y1 + y2) /2.0;

        System.out.println("punto de x es: " + r1);
        System.out.print("punto de y es: " + r2);
    }
}// termina public class

/*
aqui se esta calculando la distancia por puntos, la pendiente y el punto medio
como se puede observar es el mismo caso que en el archivo de fisicaopera
al necesitar resultado con decimales se tiene que tener un valor
que sea decimal
 */
