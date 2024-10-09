## `quick_pow`：普通快速幂

+ `quick_pow<Type>`：类型均为 `Type` 的幂算法
+ `pow(a,b,m)`：$a^b\bmod m$，$\mathcal O(b)$ 时间复杂度
+ `qpow(a,b,m)`：$a^b\bmod m$，$\mathcal O(\log_2b)$ 时间复杂度
+ `spow(a,b,m)`：$a^b\bmod m$，$\mathcal O(\log_10b)$ 或 $\mathcal O(|b|)$ 时间复杂度
+ TODO：龟速乘

## `light_pow`：增强版快速幂

咕咕咕。

+ TODO：模指数，指数对 $m-1$ 取模。
+ TODO：任意模数，扩展欧拉定理（正在找优雅的实现方式）
