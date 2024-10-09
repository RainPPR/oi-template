## `monotone_queue.hpp`：优先队列

+ `monotone_queue<Type, Compare>`
+ `push`：插入一个数
+ `pop`：删除一个数
+ `top`：返回队列中的极值
	+ 若 `Compare` 为 `std::less` 则返回最小值
	+ 若 `Compare` 为 `std::greater` 则返回最大值
+ 其他从 `deque<Type>` 继承的：
	+ `size()` `empty()` `clear()` `shrink_to_fit()`：容量操作
	+ `(c)(r)begin()` `(c)(r)end()`：迭代器
	+ `front()` `back()`：首位元素
	+ 因为有迭代器，所以可以 `for_in`，得到的为 `pair<size_t, Type>`，详见实现方式
+ 实现方式：
	+ 使用更加好写的方式：`pair<size_t, Type>`，但是常数很大
	+ 第一关键字 `size_t` 表示插入时间，用于将过期的元素删除
	+ 第二关键字存储插入的数据
	+ 使用 `tot` 表示当前时间戳，`head` 表示小于等于这个标记的都应该被删除
	+ 仅实现部分在 CP（算法竞赛）中的内容，经过洛谷 [P1886（滑动窗口 /【模板】单调队列）](https://www.luogu.com.cn/record/181048324) 验证。
+ 使用方法：
	+ `monotone_queue<int, less<>> a;`
	+ `monotone_queue<int, greater<>> b;`
	+ 详见上面的链接