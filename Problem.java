import java.io.*; 
import java.util.*;
class Main {
  public static void main(String[] args) {
     ArrayList<Integer> arrlist = new ArrayList<Integer>(100);
     // Inserting ArrayList element for example 52, 50, 27, 66, 82
     arrlist.add(52);
     arrlist.add(50);
     arrlist.add(27);
     arrlist.add(66);
     arrlist.add(82);
     System.out.println("showing ArrayList element after inserting");
     for(int i =0 ; i<arrlist.size(); i++)
     {
        System.out.println(arrlist.get(i));
     }
     // Removing the element 27 from the ArrayList
     for(int i =0 ; i<arrlist.size(); i++)
     {
       if(arrlist.get(i)==27)
       {
          arrlist.remove(i);
          break;
       }
     }
      System.out.println("showing ArrayList element after removing 27"); 
     for(int i =0 ; i<arrlist.size(); i++)
     {
        System.out.println(arrlist.get(i));
     }
     // Adding a element 99 at 2nd positon . As ArrayList index start with 0
     arrlist.add(1,99);
     System.out.println("Showing arraylist element after inserting element 99 at 2nd position");
       // showing ArrayList element
     for(int i =0 ; i<arrlist.size(); i++)
     {
        System.out.println(arrlist.get(i));
     }
  }
}