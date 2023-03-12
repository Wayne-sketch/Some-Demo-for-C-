//eigen中有两种矩阵结构：Dense和Sparse
//Dense矩阵存储读写为正常处理，Sparse由于其特殊的存储格式和操作，
//处理不一样。以下介绍Dense矩阵的块操作处理。
//Eigen中的矩阵块操作使用 .block() 指令，有2种版本
//意义：从 (i,j) 开始，大小为 (p,q) 矩阵块
//动态size(dynamic-size) 固定size(fixed-size block)
//matrix.block(i,j,p,q);	matrix.block<p,q>(i,j);
//适用于固定尺寸、动态尺寸、array取值，其中固定尺寸读取稍快些。
// #include <Eigen/Dense>
// #include <iostream>
// using namespace std;
// int main()
// {
//   Eigen::MatrixXf m(4,4);
//   m <<  1, 2, 3, 4,
//         5, 6, 7, 8,
//         9,10,11,12,
//        13,14,15,16;
//   cout << "Block in the middle" << endl;
//   cout << m.block<2,2>(1,1) << endl << endl;
//   for (int i = 1; i <= 3; ++i)
//   {
//     cout << "Block of size " << i << "x" << i << endl;
//     cout << m.block(0,0,i,i) << endl << endl;
//   }
// }

// #include <Eigen/Dense>
// #include <iostream>
// using namespace std;
// using namespace Eigen;
// int main()
// {
//     //Array????????????
//     Array22f m;
//     m << 1,2,
//         3,4;
//     Array44f a = Array44f::Constant(0.6);
//     cout << "Here is the array a:" << endl << a << endl << endl;
//     a.block<2,2>(1,1) = m;
//     cout << "Here is now a with m copied into its central 2x2 block:" << endl << a << endl << endl;
//     a.block(0,0,2,3) = a.block(2,1,2,3);
//     cout << "Here is now a with bottom-right 2x3 block copied into top-left 2x2 block:" << endl << a << endl << endl;
// }

//矩阵行列操作：按行、列读取变化，使用指令 .col() and .row()
// #include <Eigen/Dense>
// #include <iostream>
// using namespace std;
// int main()
// {
//   Eigen::MatrixXf m(3,3);
//   m << 1,2,3,
//        4,5,6,
//        7,8,9;
//   cout << "Here is the matrix m:" << endl << m << endl;
//   cout << "2nd Row: " << m.row(1) << endl;
//   m.col(2) += 3 * m.col(0);
//   cout << "After adding 3 times the first column into the third column, the matrix m is:\n";
//   cout << m << endl;
// }

//矩阵corner操作：Eigen特别地提供了矩阵的一角，或者是数列的某一端的块操作
//意义	动态size (dynamic-size)	固定size (fixed-size block)
// 左上	matrix.topLeftCorner(p,q);	matrix.topLeftCorner<p,q>();
// 左下	matrix.bottomLeftCorner(p,q);	matrix.bottomLeftCorner<p,q>();
// 右上	matrix.topRightCorner(p,q);	matrix.topRightCorner<p,q>();
// 右下	matrix.bottomRightCorner(p,q);	matrix.bottomRightCorner<p,q>();
// 前q行块	matrix.topRows(q);	matrix.topRows<q>();
// 后q行块	matrix.bottomRows(q);	matrix.bottomRows<q>();
// 前p列块	matrix.leftCols(p);	matrix.leftCols<p>();
// 后q列块	matrix.rightCols(q);	matrix.rightCols<q>();
// #include <Eigen/Dense>
// #include <iostream>
// using namespace std;
// int main()
// {
//   Eigen::Matrix4f m;
//   m << 1, 2, 3, 4,
//        5, 6, 7, 8,
//        9, 10,11,12,
//        13,14,15,16;
//   cout << "m.leftCols(2) =" << endl << m.leftCols(2) << endl << endl;
//   cout << "m.bottomRows<2>() =" << endl << m.bottomRows<2>() << endl << endl;
//   m.topLeftCorner(1,3) = m.bottomRightCorner(3,1).transpose();
//   cout << "After assignment, m = " << endl << m << endl;
// }

//矩阵vector操作
// 意义	动态size (dynamic-size)	固定size (fixed-size block)
// 前n元素块	vector.head(n);	vector.head<n>();
// 后n元素块	vector.tail(n);	vector.tail<n>();
// 从i位置开始的n元素块	vector.segment(i,n);	vector.segment<n>(i);
#include <Eigen/Dense>
#include <iostream>
using namespace std;
int main()
{
  Eigen::ArrayXf v(6);
  v << 1, 2, 3, 4, 5, 6;
  cout << "v.head(3) =" << endl << v.head(3) << endl << endl;
  cout << "v.tail<3>() = " << endl << v.tail<3>() << endl << endl;
  v.segment(1,4) *= 2;
  cout << "after 'v.segment(1,4) *= 2', v =" << endl << v << endl;
}




























