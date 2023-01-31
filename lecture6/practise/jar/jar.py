def main():
    jar = Jar()
    print(str(jar.capacity))

class Jar:
    def __init__(self, capacity=12):
        if size < 0:
            raise ValueError("Only Positive integers allowed")


    def __str__(self):
        n = size
        return n

    def deposit(self, n):
        for n in range(self.capacity):
            size += n

    def withdraw(self, n):
        if n in range(self.size):
            size -= n
        else:
            raise ValueError("Not enough cookies in the jar")

    @property
    def capacity(self):
        capacity = 12
        return capacity

    @property
    def size(self):
        size = n
        return size

main()

