package list;
import java.util.*;
public class Vectorsandstack {

	public static void main(String[] args) {
		
		Stack<Integer> stack = new Stack<>();
		stack.push(12);
		stack.push(24);
		stack.push(36);
		int popped = stack.pop();
		System.out.print(popped);
		System.out.print(stack);
	}

}
