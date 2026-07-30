package calcularmedia;
import java.util.Scanner;

public class CalcularMedia {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Nota 1: ");
        double nota1 = sc.nextDouble();

        System.out.print("Nota 2: ");
        double nota2 = sc.nextDouble();

        System.out.print("Nota 3: ");
        double nota3 = sc.nextDouble();

        double media = (nota1 + nota2 + nota3) / 3;

        System.out.print("A média das notas é: " + media);

        sc.close();
    }
}
