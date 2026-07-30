import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int number;

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um número: ");
        number = sc.nextInt();

        if (number % 2 == 0) {
            System.out.println("O número é par");
        }

        else {
            System.out.println("O número é ímpar");
        }
    }
}