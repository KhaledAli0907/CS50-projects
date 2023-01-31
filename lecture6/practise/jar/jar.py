class Jar:
    def __init__(self, capacity=12):
        if get_size() < 0:
            raise ValueError("Only Positive integers allowed")


    def __str__(self):


    def deposit(self, n):
        for n in range(self.capacity):
            self.size += n

    def withdraw(self, n):
        if n > self.size:
            


    @property
    def capacity(self):
        return self.capacity

    @property
    def size(self):
        return self.size