// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';

class Bio extends StatelessWidget {
  const Bio({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
        // alignment: Alignment.centerLeft,
        padding: EdgeInsets.symmetric(vertical: 32, horizontal: 16),
        child: Text("Flutter is so Cool!",
            style: TextStyle(
              fontSize: 24,
            )));
  }
}
