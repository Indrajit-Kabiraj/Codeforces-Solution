def countOccurence(a,n):
	d = {}
	for i in range(n):
		if given[i] not in d:
			d[a[i]] = 1
		else:
			d[a[i]]+=1

	count = 0
	for key in d:
		if d[key]>n//2:
			count=1
			print(key)
	if count == 0:
		print(-1)					



n = int(input())
given = []
for i in range(n):
	temp = int(input())
	given.append(temp)

countOccurence(given,n)	
