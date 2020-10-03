package list;

public class Linkedlist<E> {
	static class Node<E>{
		E data;
		Node next;
		Node(E data){
			this.data = data;
			next = null;
		}
	}
	Node<E> head;
	void add(E data) {
		Node toadd = new Node<E>(data);
		if(isempty()) {
			head=toadd;
			return;
		}
		Node<E> temp = head;
		while(temp.next!=null) {
			temp=temp.next;
		}
		temp.next = toadd;
	}
	boolean isempty() {
		return head==null;
	}
	public void print() {
		Node<E> temp = head;
		while(temp!=null) {
			System.out.print(temp.data+" ");
			temp = temp.next;
		}
	}
	public E removelast() throws Exception{
		Node<E> temp = head;
		if(temp==null) {
			throw new Exception("List is empty");
		}
		if(temp.next==null) {
			Node<E> removed = temp.next;
			temp=null;
			return removed.data;
		}
		while(temp.next.next!=null) {
			temp=temp.next;
		}
		Node<E> removed = temp.next;
		temp.next = null;
		return removed.data;
	}
	public E getlast() throws Exception{
		if(isempty()) {
			throw new Exception("list is empty");
		}
		Node<E> temp = head;
		while(temp.next!=null) {
			temp=temp.next;
		}
		return(temp.data);
	}
}
