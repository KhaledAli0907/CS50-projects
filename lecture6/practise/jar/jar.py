def main():
    jar = Jar()
    print(str(jar.capacity))

class Jar:
    def __init__(self, capacity=12):
        if self.size < 0:
            raise ValueError("Only Positive integers allowed")


    def __str__(self):
        n = self.size
        return n

    def deposit(self, n):
        for n in range(self.capacity):
            self.size += n

    def withdraw(self, n):
        if n in range(self.size):
            self.size -= n
        else:
            raise ValueError("Not enough cookies in the jar")

    @property
    def capacity(self):
        return capacity

    @property
    def size(self):

        return

main()

