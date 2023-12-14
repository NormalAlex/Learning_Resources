import java.util.Scanner;

/*
 * Write a Calculator program which performs Addition, subtraction, multiplication and division of two numbers in java.
 */
 
/** JavaMadeSoEasy.com */
public class CalculatorProgramUsingSwitchStatementExample {
    public static void main(String[] args) {
           // Obtaining user input
           Scanner scanner = new Scanner(System.in);
 
           System.out.print("Enter number 1 : ");
           double num1 = scanner.nextDouble();
           
           System.out.print("Enter number 2 : ");
           double num2 = scanner.nextDouble();
           
           System.out.print("Enter > + for Addition, - for subtract, * for multiplication and / for division : ");
           String operation = scanner.next();
           
           /*
            * Perform calculator operations
            */
           switch (operation) {
                  case "+" -> System.out.println("Add result > " + num1 + " + "+ num2 +" = " + (num1+num2)); // addition
    
                  case "-" -> System.out.println("Subtract result > " + num1 + " - "+ num2 +" = " + (num1-num2)); // subtraction
 
                  case "*" -> System.out.println("Multiply result > " + num1 + " * "+ num2 +" = " + (num1*num2)); // multiplication
                        
                  case "/" -> System.out.println("Division result > " + num1 + " / "+ num2 +" = " + (num1/num2)); // division
                        
                  default -> System.out.println("Invalid Grade"); //optional (case for invalid input)
           }
    }
}
