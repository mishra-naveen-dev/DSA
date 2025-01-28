import java.util.*;

class Node{
    int data;
    Node left,right;
    Node(int v){
        data = v;
        left = right = null;
    }
}
public class  inorderTraversal {
    //function to print inorder traversal
    public static void printInorder(Node root){
        if(root == null){
            return;
        }
        printInorder(root.left);
        System.out.print(root.data + " ");
        printInorder(root.right);
    }
    //driver code
    public static void main(String[] args){
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.left.right=new Node(6);

        //function call 
        System.out.println("Inorder traversal of binary tree is: ");
        printInorder(root);
    }
}
