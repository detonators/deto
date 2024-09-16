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

public class Pair<T, U> {

    private T key;
    private U value;

    public Pair(T key, U value) {
        this.key = key;
        this.value = value;
    }

    public T getKey() {
        return key;
    }

    public void setKey(T key) {
        this.key = key;
    }

    public U getValue() {
        return value;
    }

    public void setValue(U value) {
        this.value = value;
    }
}
