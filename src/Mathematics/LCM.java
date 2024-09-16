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
/*
Least common multiple

 */
public class LCM {
  // O(log(min(a,b))
  static int lcm(int a, int b){
    return a*b / HCF.hcfOptimized(a, b);
  }
  public static void main(String[] args) {
    System.out.println(lcm(4, 6));
  }
}
