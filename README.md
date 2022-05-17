# calc

数値計算支援ライブラリ群

## myfile（ファイル入出力プログラム）

```cpp
g++ sample.cpp myfile.cpp -o sample.out
```

main関数のあるプログラムと一緒にコンパイルする．

```cpp
InMyFile infile("path")
```

### 注意

計算で用いる数値はバイナリで受け渡しするので，InMyFileクラスによって読み取った数値を計算に使ってはならない．
例えばInMyFileで読み取った数値はグラフの描画などに用いるとよい．
