class Node:

    def __init__(self, data) -> None:
        self.data = data
        self.ref = None


class LinkedList:

    def __init__(self) -> None:
        self.head = None

    def addFirst(self, value):
        new_node = Node(value)
        new_node.ref = self.head
        self.head = new_node

    def addInMiddle(self, left, right, new_node_value):

        # create node
        new_node = Node(new_node_value)

        l = self.head
        while True:
            if l.data == left:
                break

            l = l.ref

        right_ref = l.ref
        l.ref = new_node
        new_node.ref = right_ref

    def addLast(self, value):

        new_node = Node(value)
        new_node.ref = None

        if self.head == None:
            self.head = new_node

        else:
            n = self.head
            while True:
                if n.ref == None:
                    break
                n = n.ref

            n.ref = new_node

    def findElement(self, value):
        n = self.head
        while n is not None:
            if n.data == value:
                print(f'{value} found')
                return True

            n = n.ref

        print(f'{value} not found')
        return False

    def printList(self):
        if self.head == None:
            print("Linked List is Empty")

        else:
            # traversal
            n = self.head
            while n is not None:
                print(n.data)
                n = n.ref


ll = LinkedList()

ll.addLast(1)
ll.addLast(22)
# ll.addLast(333)
# ll.findElement(3)
# ll.addInMiddle(22, 333, 50)
ll.printList()
