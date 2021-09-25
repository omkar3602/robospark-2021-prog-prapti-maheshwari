// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';

class UserName extends StatelessWidget {
  const UserName({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
        padding: EdgeInsets.symmetric(vertical: 40, horizontal: 16),
        child: Text(
          "omkar_j3602",
          style: TextStyle(
            fontSize: 24,
            fontWeight: FontWeight.w500,
          ),
        ));
  }
}
