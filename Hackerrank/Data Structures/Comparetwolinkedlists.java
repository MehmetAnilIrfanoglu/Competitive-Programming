

    // Complete the compareLists function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    
static boolean compareLists(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
            
            boolean result = true;
            
            while(head1.next != null && head2.next!=null){
                if (head1.data != head2.data){
                    result = false;
                    break;
                }
                head1=head1.next;
                head2=head2.next;
            }
            if(head1.next!=null || head2.next !=null)result = false;
            return result;

    }
