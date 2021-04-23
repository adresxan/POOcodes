import java.awt.*;
import javax.swing.JApplet;
import javax.swing.JFrame;

public class Circunferencia extends JApplet{
  
  public void paint(Graphics g){
    g.drawString("*", 16, 110);
    g.drawString("*", 22, 85);
    g.drawString("*", 34, 61);
    g.drawString("*", 51, 48);
    g.drawString("*", 72, 35);
    g.drawString("*", 91, 28);
    g.drawString("*", 110, 25);
    g.drawString("*", 129, 28);
    g.drawString("*", 148, 35);
    g.drawString("*", 167, 48);
    g.drawString("*", 185, 61);
    g.drawString("*", 198, 85);
    g.drawString("*", 204, 110);
    g.drawString("*", 198, 135);
    g.drawString("*", 185, 159);
    g.drawString("*", 167, 172);
    g.drawString("*", 148, 185);
    g.drawString("*", 129, 192);
    g.drawString("*", 110, 195);
    g.drawString("*", 91, 192);
    g.drawString("*", 72, 185);
    g.drawString("*", 51, 172);
    g.drawString("*", 34, 159);
    g.drawString("*", 22, 135);
  }
  public static void main(String[] args){
    JFrame frame = new JFrame ("Circunferencia");
    Circunferencia circunferenciaApplet = new Circunferencia();
    circunferenciaApplet.init();
    frame.getContentPane().add(circunferenciaApplet);
    frame.setSize(200,200);
    frame.setVisible(true);
  }
}