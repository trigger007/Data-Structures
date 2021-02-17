class Queue:
    def __init__(self,n):
        self.val=[n]
        self.top=n
        self.tail=n
    def enqueue(self,num):
        self.val.append(num)
        self.tail=self.val[-1]
    def dequeue(self):
        k=self.val[0]
        self.val.remove(k)
        self.top=self.val[0]
    def display(self):
        for i in range(len(self.val)):
            print(self.val[i])
a=Queue(4)
a.enqueue(8)
a.enqueue(1)
a.display()
a.dequeue()
a.display()
