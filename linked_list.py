class Node:
    """
    An object for storing in a single node of a linked list .
    Models two attributes : data and link to the next node in the linked list.
    """
    data = None
    next_node = None

    def __init__(self, data):
        self.data = data
    
    def __repr__(self):
        return "<Node data : %s>" % self.data


class LinkedList:
    """
    A singly linked list
    """
    def __init__(self):
       self.head=None

    def is_empty(self):
        return self.head == None

    def size(self):
        """
        Returns the number of nodes in the linked list
        Takes O(n) time .
        """
        current = self.head
        count = 0
        while current:
            count += 1
            current = current.next_node
        return count

    def add(self, data):
        """
        Adds a new node containing data at head of the linked list.
        This operation takes O(1) time .
        """
        new_node = Node(data)
        new_node.next_node = self.head
        self.head = new_node

    def search(self, key):
        """
        Search for first data that contains the matching  key in the linked list
        Returns None if none of the matching
        Takes O(n) times
        """
        current = self.head

        while current:
            if current.data == key:
                return current
            else:
                current = current.next_node
        return None

    def insert(self, data, index):
        """
        Insert a new node containing  data at index position
        Insertion takes O(1) time but finding the node at 
        the insertion point takes O(n) time
        """
        if index == 0:
            self.add(data)
        if index > 0:
            new = Node(data)
            position = index
            current = self.head
            while position >1:
                current = node.next_node
                position -= 1
            prev_node = current
            next_node = current.next_node

            prev_node.next_node = new
            new.next_node = next_node

    def remove(self, key):
        """
        Remove the node containing data matching the key in the
        Takes O(n) time
        """
        current = self.head
        previous = None
        found = False

        while current and not found:
            if current.data == key and current is self.head:
                found = True
                self.head = current.next_node
            elif current.data == key:
                found = True
                previous.next_node = current.next_node
            else :
                previous = current
                current = current.next_node
        return current

    def node_at_index(self, index):
        if index == 0:
            return self.head
        else:
            current = self.head
            position = 0

            while position < index:
                current = current.next_node
                position += 1

            return current
    

    def __repr__(self):
        """
        Return a string representation of the list 
        Takes O(n) time
        """
        nodes = []
        current = self.head
        
        while current:
            if current is self.head:
                nodes.append("Head : %s" % current.data)
            elif current.next_node is None:
                nodes.append("Tail : %s" % current.data)
            else :
                nodes.append("[%s]" % current.data)

            current = current.next_node
        return " -> ".join(nodes)
