import 'dart:ffi';
import 'package:flutter/material.dart';

import 'package:project4/quadratic.dart';

final class QuadraticResult extends Struct {
  @Int32()
  external int num_roots;
  @Double()
  external double root1;
  @Double()
  external double root2;
}

typedef SolveQuadraticC =
    QuadraticResult Function(Double a, Double b, Double c);
typedef SolveQuadraticDart =
    QuadraticResult Function(double a, double b, double c);

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(home: QuadraticSolverScreen());
  }
}
