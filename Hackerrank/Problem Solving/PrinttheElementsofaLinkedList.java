

    // Complete the printLinkedList function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static void printLinkedList(SinglyLinkedListNode head) {
                SinglyLinkedListNode temp = head;
                if(temp==null) ;
                else {
                    System.out.println(temp.data);
                    printLinkedList(temp.next);
                }

    }

