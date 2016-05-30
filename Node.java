package linked;

public class Node {
	private String element;
	private Node next;
	public Node(String ele, Node newnext){
		element = ele;
		next = newnext;
	}
	public void setNext(Node newNode){
		next = newNode;
	}
	public String getElement(){
		return element;
	}
	public Node getNext(){
		return next;
	}
	public void setElement(String str){
		element = str;
	}

}
