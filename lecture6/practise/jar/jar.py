def main():
    jar = Jar()
    print(str(jar.capacity))

class Jar:
    def __init__(self, capacity, size):



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

if __name__ == "__main__" :
    main()

