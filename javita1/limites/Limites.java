import java.util.Scanner;

public class Limites{
  private static int a;
  private static int b;
  private static int c;
  private static int impar;
  private static int par;

  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    System.out.print("Ingrese el límite inferior: ");
    a = in.nextInt();
    System.out.print("Ingrese el límite superior: ");
    b = in.nextInt();
    System.out.println("Pares:");
    for(int i = a; i <= b; i++){
      if(i%2==0){
        System.out.print(i + " ");
      }
    }
    c = a;
    System.out.println("\nImpares:");
    while(c <= b){
      if(c%2!=0){
        System.out.print(c + " ");
      }
      c++;
    }
  }
}