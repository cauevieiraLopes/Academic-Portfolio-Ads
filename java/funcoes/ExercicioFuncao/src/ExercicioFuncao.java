import java.util.Scanner;

public class ExercicioFuncao {

    public static void main(String[] args) {
        int number1;
        int number2;

        Scanner sc = new Scanner(System.in);

        welcome();

        System.out.println("Escolha um numero");
        number1 = sc.nextInt();

        System.out.println("Escolha outro numero");
        number2 = sc.nextInt();

        sum(number1, number2);

        sc.close();
    }

    static void welcome() {
        System.out.println("Utilizando funções para soma");
    }

    static void sum(int x, int y) {
        System.out.println(x + " + " + y + " = " + (x + y));
    }
}