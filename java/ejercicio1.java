/*En la Mafia del Café, el barista se dio cuenta de que algunos ingredientes en sus mezclas
estaban etiquetados de manera confusa.
Para evitar confusiones en el futuro, decidió que los códigos
de caracteres de las vocales minúsculas (a, e, i, o, u)deben ser convertidos a sus respectivas letras
en la matriz de producción. Tu misión es ayudar al barista en esta transformación.

Dada una matriz de números, verifica si alguno de los números corresponde
a los códigos de caracteres ASCII para las vocales minúsculas:
97 para 'a'
101 para 'e'
105 para 'i'
111 para 'o'
117 para 'u'

Si el número corresponde a una vocal, cámbialo por la letra correspondiente.
Si no, mantén el número tal como está.
la matriz resultante. Por ejemplo, para la entrada
[[97, 98, 99], [100, 101, 102]], la salida debe ser [['a', 98, 99], [100, 'e', 102]]
*/

public class ejercicio1{
    static void main(String[] args){

int[][] matriz= {
{65,87,12,567,56,123},
{101,114,103,105,111},
{117,108,100,97,110},
{102,111,114,105,103}
};//temrina matriz

int [] ascii= {97, 101,105, 111, 117};  //termina vector

    }//termina main
}//termina public