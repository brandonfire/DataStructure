public class Linkedlist {
	Node head;
	int size;
	public Linkedlist(){
		head = null;
		size = 0;
	}
	public void addFirst(Node fNode){
		fNode.setNext(head);
		head=fNode;
	}
	public String get(int pos){
		int i;
		Node tem;
		tem = head;
		for(i=0;i<pos;i++){
			tem = tem.getNext();
		}
		return tem.getElement();
	}
	public void setvalue(int pos, String val){
		int i;
		Node tem;
		tem = head;
		for(i=0;i<pos;i++){
			tem=tem.getNext();
		}
		tem.setElement(val);
	}
	public void display()
	{
		Node tem;
		tem = head;
		while(tem!= null)
		{
			System.out.println(tem.getElement());
			tem=tem.getNext();
		}
	}

}
