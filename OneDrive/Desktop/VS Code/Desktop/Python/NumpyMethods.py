import numpy as np

# arrange = np.arange(1,10,2)
# print(arrange)

# zeros = np.zeros(5)
# print(zeros)

# ones = np.ones((3,3))
# print(ones)

# linspace = np.linspace(0,100,10)
# print(linspace)

# random = np.random.rand(3,4)
# print(random)
# random = np.random.randint(1,1000,size=(3,4))
# random3 = np.random.randn(3,4)
# print(random)
# print(random3)

# random4 = np.random.randint(1,1000,5)
# print(random4)
# mindata = random4.min()
# print(mindata)
# maxdata = random4.max()
# print(maxdata)

# random4.sort()
# print(random4)

# import numpy as np

x = np.array(([1,2,3],[4,5,6]))
y = np.array(([1,2],[3,4],[5,6]))

# print(x)
# print
# z = np.dot(x,y)
# print(z)

a = np.array(([1,2,3],[4,5,6],[7,8,9]))
print(a)
b = np.linalg.det(a)
print(b)

ans = np.trace(a)
print(ans)