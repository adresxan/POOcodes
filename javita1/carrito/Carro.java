public class Carro{
  private static String color;
  private static int capacidad;

  public static void value(String col, int cap){
    color = col;
    capacidad = cap;
  }

  public static void main(String[] args){
    value("rojo", 4);
    System.out.println("Carro de color "+ color +" y con capacidad de "+ capacidad +" pasajeros.");
  }
}