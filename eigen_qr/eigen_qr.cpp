#include <vector>
#include <algorithm>
#include <iostream>
#include <Eigen/Dense>
 
using namespace std;
using namespace Eigen;
 
int main()
{
	Matrix3d A;
	A << 1, 1, 1,
		2, -1, -1,
		2, -4, 5;
 
	HouseholderQR<Matrix3d> qr;
	qr.compute(A);
	MatrixXd R = qr.matrixQR().triangularView<Eigen::Upper>();
	MatrixXd Q = qr.householderQ();
	cout << "HouseholderQR" << endl;
	cout << "A " << endl << A << endl << endl;
	cout << "qr.matrixQR()" << endl << qr.matrixQR() << endl << endl;
	cout << "Q " << endl << Q << endl << endl;
	cout << "Q*Q " << endl << Q * Q.transpose() << endl << endl;
	cout << "R" << endl << R << endl << endl;
	cout << "Q*R" << endl << Q * R << endl;

    Matrix2f S = Matrix2f::Random();
    JacobiRotation<float> G;
    G.makeGivens(S(0,0), S(1,0));
    cout << "Here is the vector S:" << endl << S << endl;
    S.applyOnTheLeft(0, 1, G.adjoint());
    cout << "Here is the vector J' * S:" << endl << S << endl;
}
