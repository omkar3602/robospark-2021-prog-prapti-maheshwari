// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:insta_profile/widgets/profile_image.dart';
import 'package:insta_profile/widgets/stats.dart';
import 'package:insta_profile/widgets/username.dart';

import 'bio.dart';
import 'buttons.dart';
import 'name.dart';

class MainCard extends StatelessWidget {
  const MainCard({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Center(
        child: Container(
      height: MediaQuery.of(context).size.height - 64,
      width: MediaQuery.of(context).size.width - 64,
      decoration: BoxDecoration(boxShadow: [
        BoxShadow(
          offset: Offset(3, 3),
          blurRadius: 10,
          spreadRadius: 1,
          color: Colors.grey.shade300,
        )
      ], borderRadius: BorderRadius.circular(16)),
      child: Card(
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(16),
        ),
        elevation: 0,
        margin: EdgeInsets.symmetric(horizontal: 8, vertical: 8),
        child: Padding(
          padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 24),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.start,
            // ignore: prefer_const_literals_to_create_immutables
            children: [
              UserName(),
              ProfileImage(),
              Name(),
              Stats(),
              Bio(),
              Buttons(),
            ],
          ),
        ),
      ),
    ));
  }
}
