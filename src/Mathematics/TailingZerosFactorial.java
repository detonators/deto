/*
  
            
     |        |                   | 
 ____|  ____ -|--  __  ___   __  -|--  __    _
|    | | |_|  |   |  | |  | |  |  |   |  |  |
|____| |____  |_  |__| |  | |__|_ |__ |__|  |
_________________________________________________
-------------------------------------------------

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<+*&-------------------&*+>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
package Mathematics;

// tc : O(logn) log to the base of 5
public class TailingZerosFactorial {

  static int findTrailingZeros(int n){
    int res = 0;
    for (int i = 5; i < n ; i*=5){
      res += n/i;
    }
    return res;
  }
  public static void main(String[] args) {
    System.out.println(findTrailingZeros(100));
  }

}
