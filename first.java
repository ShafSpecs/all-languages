package helpme;

import java.util.Scanner;

public class first {
  public static void main(String[] args) {
    Scanner userInput = new Scanner(System.in);
    
    System.out.print("Enter the radius of your circle: ");
    
    int radius = userInput.nextInt();
    
    double circumference = 2 * Math.PI * radius;
    double area = Math.PI * (radius * radius);
    
    System.out.println("The circumference is: " + circumference + ", and the area is: " + area);
  }
}
