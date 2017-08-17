#include <Python.h>
static PyObject* py_myFunction(PyObject* self, PyObject* args)
{
  char *s = "Hello from C!";
  return Py_BuildValue("s", s);
}
static PyObject* py_myOtherFunction(PyObject* self, PyObject* args)
{
  double x, y;
  PyArg_ParseTuple(args, "dd", &x, &y);
  return Py_BuildValue("d", x*y);
}
static PyMethodDef myModule_methods[] = {
  {"myFunction", py_myFunction, METH_VARARGS},
  {"myOtherFunction", py_myOtherFunction, METH_VARARGS},
  {NULL, NULL}
};
void initmyModule()
{
  (void) Py_InitModule("myModule", myModule_methods);
}
