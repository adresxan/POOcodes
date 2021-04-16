import java.util.Scanner;

public class Calculadora{

  private static int num1;
  private static int num2;
  private static int op;
  private static int res;

  public static int suma(int a, int b){
    res = a + b;
    return res;
  }
  public static int resta(int a, int b){
    res = a - b;
    return res;
  }
  public static int multi(int a, int b){
    res = a * b;
    return res;
  }
  public static int div(int a, int b){
    res = a / b;
    return res;
  }
  public static void operar(int a, int b, int c){
    if(c == 1){
      suma(a, b);
    }else if(c == 2){
      resta(a, b);
    }else if(c == 3){
      multi(a, b);
    }else if(c == 4){
      div(a, b);
    }
  }
  
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    System.out.println("¿Qué operación desea realizar? 1.Suma 2.Resta 3.Multiplicacion 4.Division");
    op = in.nextInt();
    System.out.println("Ingrese los valores a operar.");
    System.out.print("Primer valor: ");
    num1 = in.nextInt();
    System.out.print("Segundo valor: ");
    num2 = in.nextInt();

    operar(num1, num2, op);
    System.out.println("El resultado es: " + res);
  }
}