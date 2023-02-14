from collections import deque
# Create a deque
q = deque(['raj','jay','ajay','vijay','raj'])

#q.append('sachin')
#q.appendleft('saurav')

q.pop()
q.popleft() 

q.insert(0,'sachin')

q.extend(["virat","kohli"])
q.extendleft(["sachin","saurav"])

#q.copy()

try:
    ind = q.index('jay',1,5)

except ValueError:
    print('jay not found')


for i in q:
    print(i)