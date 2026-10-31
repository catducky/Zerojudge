# Zerojudge 解題紀錄

存放 ZeroJudge 題目的程式與解題筆記。

## 目錄

- `solutions/`：依題號建立資料夾，例如 `solutions/a001/`。
- 每題可放程式檔與 `README.md`，記錄題目連結、解題思路及複雜度。

## 解題紀錄

| 題號 | 題目 | 解法 | 程式 | 題解 |
| --- | --- | --- | --- | --- |
| f608 | [4. 飛黃騰達](https://zerojudge.tw/ShowProblem?problemid=f608) | 排序＋最長非遞減子序列 | [C++](solutions/f608/main.cpp) | [README](solutions/f608/README.md) |

## 從本機同步

在 PowerShell 執行：

```powershell
cd C:\Users\0\Projects\Zerojudge
```

開始寫題目前，下載最新內容：

```powershell
git pull --ff-only
```

寫好並儲存檔案後，先檢查變更，再提交及上傳：

```powershell
git status
git add .
git commit -m "新增 a001 解題"
git push
```

`git commit` 的訊息可替換成這次修改的內容。
