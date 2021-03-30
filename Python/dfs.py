class node:
    def __init__(self,val):
        self.data=val
        self.right=None
        self.left=None
class tree:
    def __init__(self):
        self.root=None

    def createnode(self,val):
        a=node(val)
        return a

    def insert(self,val):
        temp=self.root
        ch=0
        newnode=self.createnode(val)
        while ch!=1:
            if val>=temp.data:
                if temp.right==None:
                    temp.right=newnode
                    ch=1
                temp=temp.right
            elif val<temp.data:
                if temp.left==None:
                    temp.left=newnode
                    ch=1
                temp=temp.left
    def dfs(self,v):
        l=[]
        v=[]
        temp=self.root
        l.append(temp)
        while len(l)>0:
            temp=l[-1]
            print("l:",temp.data)
            if temp.left!=None and temp.left not in v:
                l.append(temp.left)
            elif temp.left==None or temp.left in v:
                if temp.right!=None and temp.right not in v:
                    l.append(temp.right)
                elif temp.right in v or temp.right==None:
                    v.append(l.pop())
                    print("v:",v[-1].data)
                    


                
t=tree()
t.root=node(5)
n=int(input())
for i in range(n):
    t.insert(int(input()))

t.dfs(1)
