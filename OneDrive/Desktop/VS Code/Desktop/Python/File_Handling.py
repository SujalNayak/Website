data = [[500,600],[700,500],[400,800],[300,500],[600,500],[200,700],[600,800]]
sum = []
for i in data:
    for j in i:
        sum1 += j
    sum.append(sum1)
    sum1 = 0

maxsum = max(sum)
index = sum.index(maxsum)
print(sum)
sumlist2 = []
for i in data:
    sum2 += sum(1)
    sumlist2.append(sum2)
    sum2 = 0
print(sumlist2)
# for i in sumlist2:
#     sum3 += 




# def openthefile():
#     file = open("C:\\Users\\Victus\\OneDrive\\Desktop\\filepy.txt","w")
#     str = "Hello\nWelcome to file handling in python"
#     file.write(str)
#     print("file updated")

# def appenddatatofile():
#     file = open("C:\\Users\\Victus\\OneDrive\\Desktop\\filepy.txt","a")
#     str1 = "\nThis data is appended to the file\n"
#     str2 = "PalinDrome Word Naman"
#     file.write(str1)
#     print("file updated")

# list = []

# def readdatafromfile():
#     file = open("C:\\Users\\Victus\\OneDrive\\Desktop\\filepy.txt","r")
#     # print(file.read())
#     i = 0
#     count = 0
#     for i in file:
#         for word in i.split():
#             count+=1
#             list.append(word)
#         # print(i)
#     print(count)
#     print("list=",list)
#     file.close()
   
# list1 = []
# list2 = []
# duplicate = []
# unique = []
# # openthefile()
# # appenddatatofile()
# readdatafromfile()

# def findpalindrome():
#     for i in list:
#         j = i[::-1]
#         if i == j:
#             list1.append(i)
#     print(list1)

# # findpalindrome()    

# def finduplicate():
#     for i in list:
#         if i not in unique:
#             unique.append(i)
#         elif i not in duplicate:
#             duplicate.append(i)
#     print(unique)

# finduplicate()
