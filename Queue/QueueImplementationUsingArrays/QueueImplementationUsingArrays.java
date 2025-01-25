class QueueImplemArray {
    private int arr[];
    private int start, end, currSize, maxSize;

    public QueueImplemArray() {
        this.maxSize = 16;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }

    public QueueImplemArray(int size) {
        this.maxSize = size;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }

    public void push(int newElement) {
        if (currSize == maxSize) {
            System.out.println("Queue is full\nExiting...");
            System.exit(1);
        }
        if (end == -1) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % maxSize;
        }
        arr[end] = newElement;
        System.out.println("The element pushed is " + newElement);
        currSize++;
    }

    public int pop() {
        if (start == -1) {
            System.out.println("Queue Empty\nExiting...");
            System.exit(1);
        }
        int poppedElement = arr[start];
        if (currSize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % maxSize;
        }
        currSize--;
        return poppedElement;
    }

    public int top() {
        if (start == -1) {
            System.out.println("Queue Empty\nExiting...");
            System.exit(1);
        }
        return arr[start];
    }

    public int size() {
        return currSize;
    }
}

public class QueueImplementationUsingArrays {
    public static void main(String[] args) {
        QueueImplemArray q = new QueueImplemArray(5);
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        System.out.println("The size of the queue is " + q.size());
        System.out.println("The top element is " + q.top());
        System.out.println("The popped element is " + q.pop());
        System.out.println("The size of the queue is " + q.size());
        System.out.println("The top element is " + q.top());
    }
}