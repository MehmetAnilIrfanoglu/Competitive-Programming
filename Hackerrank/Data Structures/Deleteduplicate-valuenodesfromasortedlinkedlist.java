

class Result {

    /*
     * Complete the 'removeDuplicates' function below.
     *
     * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
     * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
     */

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */

    

}
public static SinglyLinkedListNode removeDuplicates(SinglyLinkedListNode llist) {
    // Write your code here
    SinglyLinkedListNode result = llist;
    if(llist.next==null || llist == null)return llist;
    while(llist.next!=null){
        if(llist.next.data==llist.data){
            llist.next = llist.next.next;
        }else{
            llist = llist.next;
        }
        
    }
    return result;

    }

