
import java.util.*;
import java.util.Stack;

class prefixInfix {

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
    //..convert prefix to Infix experessioInfix

    public static String convert(String str) {
        Stack<String> stack = new Stack<>();

        //length of expression
        int l = str.length();

        //reading from right to left 
        for (int i = l - 1; i >= 0; i--) {
            char c = str.charAt(i);
            if (isOperator(c)) {
                String op1 = stack.pop();
                String op2 = stack.pop();

                //concar the operands andoperator
                String temp = "(" + op1 + c + op2 + ")";
                stack.push(temp);

            } else {
                stack.push(c + "");
            }

        }
        return stack.pop();
    }
//driver code 

    public static void main(String[] args) {

        String exp = "*-A/BC-/AKL";
        System.out.println("Infix : " + convert(exp));
    }

}
