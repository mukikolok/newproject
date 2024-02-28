 private:
  Interpreter() {
#if PYTHON_VERSION_MAJOR == 2
#define ToPyStr(X) PyString_FromString(X)
    char name[] = "plotting";
#else
#define ToPyStr(X) PyUnicode_FromString(X)
    const wchar_t name[] = L"plotting";
#endif
//hai
bool hist(
    const Eigen::Ref<const Eigen::VectorXd>& x, const int bins,
    const std::string histtype) {
  initPython();

  // using python lists
  PyObject* xlist = PyList_New(x.size());

  for (int i = 0; i < x.size(); ++i) {
    PyList_SetItem(xlist, i, PyFloat_FromDouble(x(i)));

int main() {
  // Simple:
  std::vector<double> v({1, 2, 3, 4});
  plotty::plot(v);
  plotty::show();
//motto
