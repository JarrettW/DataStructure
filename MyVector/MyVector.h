#ifndef MYVECTOR_H_
#define MYVECTOR_H_
//向量模板类
#define DEFAULT_CAPACITY 3 //默认初始容量
template <typename T>
class MyVector{
    //Friend functions
    //comparison operator
    friend bool operator< (const MyVector<T> &lhs, const MyVector<T> &rhs);
    friend bool operator==(const MyVector<T> &lhs, const MyVector<T> &rhs);
    friend bool operator!=(const MyVector<T> &lhs, const MyVector<T> &rhs);
    friend bool operator> (const MyVector<T> &lhs, const MyVector<T> &rhs);
    friend bool operator<=(const MyVector<T> &lhs, const MyVector<T> &rhs);
    friend bool operator>=(const MyVector<T> &lhs, const MyVector<T> &rhs);
    
public:
    //default constructor,容量为c,规模为s,所有元素初始为v
    MyVector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) {
        _elem = new T[_capacity = c];
        for(_size = 0; _size < s; _elem[_size++] = v);
    }
    
    //constructor,将向量初始化为n个0
    MyVector(int n);
    //constructor,将向量初始化为n个e
    MyVector(int n, T e);
    //constructor,将向量初始化为1个e
    MyVector(T e);
    //initialization_list,列表初始化
    MyVector(std::initialization_list<T> li);
    //destructor
    
    //copy constructor
    
    //assignment operator
    
    //move constructor
    
    //move assignment operator
    
    //size
    
    //empty
    
    //重载下标运算符
    
    //获取秩为r的元素
    
    //insert, 默认作为末元素插入
    
    //find, 无序查找(基于区间查找)
    
    //sort, 统一排序接口, 随机选择排序方法(整体排序)
    
    //search, 有序查找(基于区间查找)
    
    //remove, 删除秩为r的元素(基于区间删除)
    
    //判断向量是否已排序
    
    //重载下标操作符,通过下标访问元素
    
    //整体置乱器
    
    //无序去重
    
    //有序去重
    
    //遍历(使用函数指针,只读或局部性修改)
    
    //遍历(使用函数对象, 可全局性修改)
   
protected:
    //复制数组区间A[lo,hi)
    void copyFrom(T *A, int , int );
    //空间不足时扩容
    void expand();
    //缩容
    void shrink();
    //无序区间查找
    
    //有序区间查找
    
    //区间排序
    
    //insert, 将元素e插入秩r,原后继元素依次后移
    
    //删除秩在区间[lo,hi)之内的元素
    
    //对[lo, hi)区间置乱
    
    //max.选取最大元素
    
    //bubble sort
    
    //insert sort
    
    //selection sort
    
    //merge sort
    
    //partition, 轴点构造算法
    
    //quick sort,快排
    
private:
  T *_elem;
  unsigned _size;
  unsigned _capacity;
};
#endif