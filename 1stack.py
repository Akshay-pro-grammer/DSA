class Stack:
    def __init__(self):
        self.top=-1
        self.stack=[]
    def push(self,el):
        self.stack.append(el)
        self.top+=1
    def pop(self):
        if self.top == -1:
            return -1
        el=self.stack.pop()
        return el
    def peek(self):
        if self.top == -1:
            return -1
        return self.stack[self.top]
    def isEmpty(self):
        return self.top==-1
    def toString(self) -> str:
        return ''.join(str(i) for i in self.stack)
