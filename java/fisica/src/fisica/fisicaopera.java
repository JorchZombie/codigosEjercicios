package fisica;

public class fisicaopera extends matematicas {
    public fisicaopera(int tiempo, int ace, int velo){
        super (tiempo, ace, velo);
    }

    void distancia (int velo, int tiempo, int ace){
        double dista;
        dista = velo * tiempo + (0.5*ace) * Math.pow(tiempo,2);
        System.out.print("la distancia es: " + dista);
    }

    void tiempo (int velo, int tiempo, int ace){
        double time;
        time = (tiempo - velo)/ (double) ace;
        System.out.print("el valor del tiempo es: " + time);
    }

    void velocidad (int velo, int ace, int tiempo) {
        double velofinal;
        velofinal = velo + (ace * tiempo);
        System.out.print("el valor de la velocidad es: " + velofinal);
    }
}//temrina public class
/*
aqui se esta calculando la distancia, el tiempo, velocidad
solo una pequeña obseravion ya que la operacion de el tiempo
se esta haciendo double un valor (en este caso es la variable de ace)
ya que los valores pueden que sean enteros y al necesitar valores
con decimales se tiene que hacer aun que sea un valor entero
 */




