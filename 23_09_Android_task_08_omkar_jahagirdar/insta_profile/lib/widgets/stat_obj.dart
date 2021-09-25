// ignore_for_file: prefer_const_constructors_in_immutables, use_key_in_widget_constructors, prefer_typing_uninitialized_variables

import 'package:flutter/material.dart';

class StatObj extends StatelessWidget {
  final count;
  final type;

  StatObj({this.count, this.type});

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.spaceBetween,
      children: [
        Text("$count",
            // ignore: prefer_const_constructors
            style: TextStyle(
              fontSize: 30,
              fontWeight: FontWeight.bold,
            )),
        Text(type,
            // ignore: prefer_const_constructors
            style: TextStyle(
              fontSize: 14,
            )),
      ],
    );
  }
}
