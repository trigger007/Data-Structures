class Stack:
    def __init__(self,top):
        self.top=top
        self.val=[self.top]
    def push(self,num):
        l=[]
        l.append(num)
        self.val=l+self.val
        self.top=self.val[0]
    def pop(self):
        self.val.remove(self.val[0])
        self.top=self.val[0]
    def display(self):
        for i in range(len(self.val)):
            print(self.val[i])
a=Stack(5)
a.display()
a.push(20)
a.push(70)
a.display()
a.pop()
a.display()


    