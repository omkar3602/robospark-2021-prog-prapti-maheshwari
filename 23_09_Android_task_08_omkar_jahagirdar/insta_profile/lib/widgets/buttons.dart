// ignore_for_file: prefer_const_constructors, avoid_unnecessary_containers

import 'package:flutter/material.dart';

class Buttons extends StatelessWidget {
  const Buttons({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
        child: Row(
      mainAxisAlignment: MainAxisAlignment.spaceAround,
      children: [
        Container(
          child: Image.asset(
            'assets/heart.png',
            width: 50,
          ),
        ),
        Container(
            padding: EdgeInsets.symmetric(vertical: 6, horizontal: 24),
            decoration: BoxDecoration(
              borderRadius: BorderRadius.all(Radius.circular(6)),
              color: Color(0xff1e93ed),
            ),
            child: Text("Follow",
                style: TextStyle(fontSize: 16, color: Colors.white))),
        Container(
            padding: EdgeInsets.symmetric(vertical: 4, horizontal: 22),
            decoration: BoxDecoration(
                borderRadius: BorderRadius.all(Radius.circular(6)),
                border: Border.all(
                  width: 2,
                  color: Colors.black,
                )),
            child: Text("Message", style: TextStyle(fontSize: 16))),
      ],
    ));
  }
}
