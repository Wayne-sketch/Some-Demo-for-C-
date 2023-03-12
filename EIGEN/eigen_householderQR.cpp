#include <vector>
#include <algorithm>
#include <iostream>
#include <Eigen/Dense>
 
using namespace std;
using namespace Eigen;
 
int main()
{
	// Matrix3d A;
	// A << 1, 1, 1,
	// 	2, -1, -1,
	// 	2, -4, 5;
 
	// HouseholderQR<Matrix3d> qr;
	// qr.compute(A);
	// MatrixXd R = qr.matrixQR().triangularView<Eigen::Upper>();
	// MatrixXd Q = qr.householderQ();
	// cout << "HouseholderQR" << endl;
	// cout << "A " << endl << A << endl << endl;
	// cout << "qr.matrixQR()" << endl << qr.matrixQR() << endl << endl;
	// cout << "Q " << endl << Q << endl << endl;
	// cout << "Q*Q " << endl << Q * Q.transpose() << endl << endl;
	// cout << "R" << endl << R << endl << endl;
	// cout << "Q*R" << endl << Q * R << endl;

	// MatrixXf A(MatrixXf::Random(5,3)), thinQ(MatrixXf::Identity(5,3)), Q;
	// A.setRandom();
	// HouseholderQR<MatrixXf> qr(A);
	// Q = qr.householderQ();
	// thinQ = qr.householderQ() * thinQ;
	// std::cout << "The complete unitary matrix Q is:\n" << Q << "\n\n";
	// std::cout << "The thin matrix Q is:\n" << thinQ << "\n\n";
	Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic> A(2,2);
	A.setRandom();
	std::cout << "The matrix A is:\n" << A << "\n\n";
	std::cout << "The matrix A(0,0) is:\n" << A(0,0) << "\n\n";

}