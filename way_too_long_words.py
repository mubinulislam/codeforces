n=int(input())
a=[]
for i in range(n):
    word=str(input())
    if len(word)>10:
        count=len(word[1:len(word)-1])
        n_word=(word[0]+str(count)+word[len(word)-1])
        a.append(n_word)
    else:
        a.append(word)
 
for i in a:
    print(i)