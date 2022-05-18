# calc

数値計算支援ライブラリ群

## myfile（ファイル入出力プログラム）

ファイルへの出力をOutMyFile, 入力をInMyFileクラスで支援する．
main関数をもつsample.cppと一緒にmyfile.cppをコンパイルする．

```cpp
g++ sample.cpp myfile.cpp -o sample.out
```

まずは，OutMyFileを使ってみよう．

```cpp
#include <iostream>

int main() {
  OutMyFile outfile("data/sample.txt");
  outfile.out(N, x);
  return 0;
}
```

data/sample.txtに配列数Nの配列xを改行しながら書き込む．
数値計算するときは事前に配列数がわかっていることが多い．
ofstreamで逐一ファイルに書き込む方がコスト的には安いが，OutMyFileでは配列で渡すことができるのでコードが整理されて見やすくなる．

```cpp
#include <iostream>

int main() {
  outfile.out(x, y)
  return 0;
}
```

このように2行の書き込みにも対応している．

次に，InMyFileを使ってみる．

```cpp
#include <iostream>

int main() {
  const InMyFile y("data/sample.txt");
  std::cout << y(23) << std::endl;
  return 0;
}
```

data/sample.txtから読み取った配列にoperator()でアクセスする．

## integral

簡単に数値積分を試すことができる．
特異点が積分区間内や端に含まれている場合，とんでもない値を追いかける可能性があることに注意して使う．
