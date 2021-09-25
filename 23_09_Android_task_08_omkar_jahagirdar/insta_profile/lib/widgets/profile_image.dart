// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';

class ProfileImage extends StatelessWidget {
  const ProfileImage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
        height: 200,
        width: 200,
        decoration: BoxDecoration(
          shape: BoxShape.circle,
          image: DecorationImage(
              image: AssetImage('assets/pic.jpeg'), fit: BoxFit.fill),
          // ignore: prefer_const_literals_to_create_immutables
          boxShadow: [
            BoxShadow(
              offset: Offset(3, 3),
              blurRadius: 10,
              spreadRadius: 1,
              color: Colors.black,
            )
          ],
        ));
  }
}
