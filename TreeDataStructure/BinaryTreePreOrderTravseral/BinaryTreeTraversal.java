import java.util.*;
class Node{
    int data;
    Node left,right;
    Node(int v){
        data=v;
        left=right=null;

    }
}
//class for binary tree
class BinaryTree{
    Node root;
    public static void printPreorder(Node node){
        if(node==null) return;
 System.out.print(node.data+" ");
 printPreorder(node.left);
    printPreorder(node.right);
    }
}
//main class
class BinaryTreeTraversal{
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        //Constructing the binary tree
        tree.root=new Node(1);
        tree.root.left=new Node(2);
        tree.root.right=new Node(3);
        tree.root.left.right=new Node(4);
        tree.root.left.left=new Node(5);
        tree.root.right.right=new Node(6);

        //function call
        System.out.println("Preorder traversal of binary tree is: ");
        BinaryTree.printPreorder(tree.root);
    }
}