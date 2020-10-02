T=int(input())
for i in range(T):
    N,K,L= input().split(' ')
    N=int(N)
    K=int(K)
    L=int(L)
    
    overs= [-1 for i in range(N)]
    #print(overs)
    for k in range(K):
        count=0
        if(K!=1):
            for i in range(k,N,K):
                if(count<L):
                    overs[i]=k+1
                    count+=1
        else:
            if(N>K):
                overs[0]=-1
            else:
                for i in range(N):
                    overs[i]=i+1
    if (-1 in overs):
        print(-1)
    else:    
        print(' '.join(map(str,overs)))

    