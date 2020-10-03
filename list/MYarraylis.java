package list;
import java.util.*;
import java.util.List;

public class MYarraylis {

	public static void main(String[] args) throws Exception{
		Mystack<Integer> stack = new Mystack<>();
		stack.push(12);
		stack.push(20);
		stack.push(30);
		int popped = stack.pop();
		System.out.println(popped);
		int last = stack.peek();
		System.out.println(last);
		stack.print();
	}
}
