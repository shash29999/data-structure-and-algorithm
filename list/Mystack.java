package list;

public class Mystack<E> {
	Linkedlist<E> all = new Linkedlist<>();
	void push(E e) {
		all.add(e);
	}
	E pop() throws Exception{
		if(all.isempty()) {
			throw new Exception("Empty");
		}
		return(all.removelast());
	}
	E peek() throws Exception {
		return(all.getlast());
	}
	void print() {
		all.print();
	}
}
