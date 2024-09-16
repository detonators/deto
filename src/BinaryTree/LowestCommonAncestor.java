/*
  
            
     |        |                   | 
 ____|  ____ -|--  __  ___   __  -|--  __    _
|    | | |_|  |   |  | |  | |  |  |   |  |  |
|____| |____  |_  |__| |  | |__|_ |__ |__|  |
_________________________________________________
-------------------------------------------------

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<+*&-------------------&*+>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/
package BinaryTree;
/*
either both are present or none
 */
public class LowestCommonAncestor {

  public static void main(String[] args) {
    Node root = Node.createBinaryTree();
    Node ans = getLCA(root, 4, 3);
    System.out.println(ans.value);
  }

  static Node getLCA(Node root, int x, int y ){
    if(root == null) return null;

    if (root.value == x || root.value == y){
      return root;
    }


    Node left = getLCA(root.left, x, y);
    Node right = getLCA(root.right, x, y);

    if(left == null){
      return right;
    }else if(right == null){
      return left;
    }

    return root;
  }

}
