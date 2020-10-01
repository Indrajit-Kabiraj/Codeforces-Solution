def search(list,n):
	low = 0
	high = len(list)-1

	while low<= high:
		mid = low+(high-low)//2

		if(list[mid] == n):
			return mid
		elif(list[mid] < n):
			low = mid
		else:
			high = mid

	return -1			



list = [2,3,8,45,99,101,200,350]
n = 101

a = search(list,n)
print(a)
