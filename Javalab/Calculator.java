import java.util.*;

public class Calculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Program to make a calculator using switch statement.");
        System.out.print("Enter the first number : ");
        int num1 = in.nextInt();
        System.out.print("Enter the second number : ");
        int num2 = in.nextInt();

        System.out.print("Enter the operator : ");
        String op = in.next();
        switch (op) {
            case "+":
                System.out.println("The sum of the numbers is " + (num1 + num2));
                break;
            case "-":
                System.out.println("The difference of the numbers is " + (num1 - num2));
                break;
            case "*":
                System.out.println("The product of the numbers is " + (num1 * num2));
                break;
            case "/":
                System.out.println("The quotient of the numbers is " + (num1 / num2));
                break;
            case "%":
                System.out.println("The remainder of the numbers is " + (num1 % num2));
                break;
            default:
                System.out.println("Error 404 !");
                break;
        }

    }
}
