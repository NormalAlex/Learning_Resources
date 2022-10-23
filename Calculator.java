import java.util.Scanner;
 
/*
 * Write a Calculator program which performs Addition, subtraction, multiplication and division of two numbers in java.
 */
 
/** JavaMadeSoEasy.com */
public class CalculatorProgramUsingSwitchStatementExample {
    public static void main(String[] args) {
 
           Scanner scanner = new Scanner(System.in);
 
           System.out.print("Enter number 1 : ");
           int num1 = scanner.nextInt();
           
           System.out.print("Enter number 2 : ");
           int num2 = scanner.nextInt();
           
           System.out.print("Enter > + for Addition, - for subtract, * for multiplication and / for division : ");
           String operation = scanner.next();
           
           /*
            * Perform calculator operations
            */
           switch (operation) {
                  case "+":
                        System.out.println("Add result > " + num1 + " + "+ num2 +" = " + (num1+num2));
                        break;
    
                  case "-":
                        System.out.println("Subtract result > " + num1 + " - "+ num2 +" = " + (num1-num2));
                        break;
 
                  case "*":
                        System.out.println("Multiply result > " + num1 + " * "+ num2 +" = " + (num1*num2));
                        break;
                        
                  case "/":
                        System.out.println("Division result > " + num1 + " / "+ num2 +" = " + (num1/num2));
                        break;
                        
                  default : //optional
                        System.out.println("Invalid Grade");
                        break; //optional
           }
    }
}
