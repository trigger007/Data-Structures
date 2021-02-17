class linkedlist:
    def __init__(self):
        head=None
class node:
    def __init__(self,data):
        self.val=data;
        self.next=None
    def createnode(self,data):
        a=node(data)
        a.next=None
        return a
    def addelement(self):
        a=node(20)
        
