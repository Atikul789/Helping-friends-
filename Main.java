/* Write a java program based on following conditions: There is one Circle class and one Cylinder Class. Circle class has an area function.
 Cylinder Class has to Circle area*height). Use inheritance to calculate Volumn of Cylinder. */
import java.util.*;
class Circle {
  public double radius;

  public Circle(double r) {
  radius = r;
  }

  public double circleArea() {
      return Math.PI * radius * radius;
  }

  public double circleCirumference() {
      return Math.PI * 2 * radius;
    }
}
 class Cylinder extends Circle {
  public double height;

  public Cylinder(double r, double h) {
    super(r);
    height = h;
  }

  public double getVolume() {
    return circleArea() * height;
  }

} 

class Main {
  public static void main(String[] args) {
    Cylinder cylinder = new Cylinder(1.2,1.4);
    double ans = cylinder.getVolume();
    System.out.println(ans);
  }
}