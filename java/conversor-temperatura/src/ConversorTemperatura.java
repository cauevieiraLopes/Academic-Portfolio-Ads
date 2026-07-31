import java.util.Scanner;

public class ConversorTemperatura {

    public static void main(String[] args) {
        double temp;

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a temperatura em °C: ");
        temp = sc.nextDouble();

        double Fahrenheit = (temp * 1.8) + 32;

        System.out.println(temp + "°C em Fahrenheit é igual a: " + Fahrenheit + "°F");

        sc.close();
    }
}
