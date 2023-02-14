import numpy as np
a = np.array([[1,2],[3,4]])
b = np.array([[5,6],[7,8]])
print(a+1)
print(a.sum(axis=0))
print(a.sum(axis=1))
print(a * b)
print(a.sum() + b.sum())
#print((a+b).sum())
print("transpose....",np.transpose(a))
#axis=0 means column
#axis=1 means row

# Sliced array Concept

arr = np.array([[-1,2,0,4],
               [4,-0.5,6,0],
               [2.6,0,7,8],
               [3,-7,4,2.0]])
print(arr)
sliced_array = arr[::2]
print(sliced_array)
