
import java.util.*;

class preToPostfix {

    //function to check if character is operator or not 
    static boolean isOperator(char x) {
        switch (x) {
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            case '%':
                return true;
        }
        return false;
    }

    //convert postfix to prefix expression 
    static String postTopre(String post_exp) {
        Stack<String> s = new Stack<String>();
        //length of expression
        int length = post_exp.length();
        //reading from  right to left 
        for (int i = 0; i < length; i++) {
            //check if symboll is operator 
            if (isOperator(post_exp.charAt(i))) {
                //pop two operands from stack
                String op1 = s.peek();
                s.pop();
                String op2 = s.peek();
                s.pop();
                //concat the operands and operator
                String temp = post_exp.charAt(i) + op2 + op1;
                //push String temp back to stack 
                s.push(temp);

            } //if sysmbol is operand
            else {
                //push the operand to the stack
                s.push(post_exp.charAt(i) + "");
            }
        }
        //concatenate all string in stack and return the answer
        String ans = "";
        for (String i : s) {
            ans += i;
        }
        return ans;

    }

    public static void main(String args[]) {
        String post_exp = "ABC/-AK/L-*";
        System.out.println("Prefix : " + postTopre(post_exp));
    }

}
