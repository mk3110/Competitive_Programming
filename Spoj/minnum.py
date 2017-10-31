while True:
	var=input()
	var=int(var)
	if var == -1:
		break
	ans=int(var/9)
	if var%9 != 0:
		ans=ans+1
	print(ans)