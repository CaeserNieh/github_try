Git
==========
https://git-scm.com/book/zh-tw/v1/Git-%E5%88%86%E6%94%AF-%E5%88%A9%E7%94%A8%E5%88%86%E6%94%AF%E9%80%B2%E8%A1%8C%E9%96%8B%E7%99%BC%E7%9A%84%E5%B7%A5%E4%BD%9C%E6%B5%81%E7%A8%8B


# branch
可以先在repo上面開branch
當你clone下來以後，要在本機端再開一個相同名稱的branch ?
切到該branch底下 就可以 git push origin branchName 就可以推到該branch底下




可以不用先開branch 在repo上
可以直接先切一條branch出來
在底下開發 然後commit
在 git push origin branchName  
Github repo底下就出現了你剛剛推的branch


delete Github repo branch
git push origin --delete [branchname]

# merge
![](https://i.imgur.com/ZKtqUOZ.png)

如果要merge到master上
先切到master上，git merge branchName
這樣你master底下就會出現 被merge 那條branch的東西
如果你要推上github repo，再 git push origin master就好了


# Delete file in Github repo 
```
git rm file1.txt
git commit -m "remove file1.txt"

```
And to push changes to remote repo
```
git push origin branch_name
```


