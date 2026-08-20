def sortedArray(arr1,arr2):
  l1=[]
  i,j=0,0
  while i<len(arr1) and j<len(arr2):
    if(arr1[i]==arr2[j]):
      l1.append(arr1[i])
      i+=1
      j+=1
    elif(arr2[j]<arr1[i] and arr1[i]!=arr2[j]):
      if(arr2[j] in l1):
        l1.append(arr2[j])
      j+=1 
    elif(arr1[i]<arr2[j] and arr1[i]!=arr2[j]):
      if(arr1[i] in l1):
        l1.append(arr2[i])
      i+=1
  return l1

arr3=[1,2,2,3,4,5]
arr4=[2,2,2,3,6,8,9]
li=sortedArray(arr3,arr4)
for i in range(len(li)):
  print(li[i])
