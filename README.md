# calc

数値計算支援ライブラリ群

## myfile（ファイル入出力プログラム）

ファイルへの出力をOutMyFile, 入力をInMyFileクラスで支援する．
main関数をもつsample.cppと一緒にmyfile.cppをコンパイルする．

```cpp
g++ sample.cpp myfile.cpp -o sample.out
```

sample.cpp内で下のように使う．

```cpp
int main() {
  OutMyFile outfile("data/sample.txt");
  outfile.out(N, x);
  return 0;
}
```

data/sample.txtに配列数Nの配列xを改行しながら書き込む．

```cpp
int main() {
  const InMyFile y("data/sample.txt");
  std::cout << y(23) << std::endl;
  return 0;
}
```

data/sample.txtから読み取った配列にoperator()でアクセスする．
範囲外にアクセスしよとした場合，errorを警告文として表示し0を返す．

### 注意

計算で用いる数値はバイナリで受け渡しするので，InMyFileクラスによって読み取った数値を計算に使ってはならない．
例えばInMyFileで読み取った数値はグラフの描画などに用いるとよい．
