// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:insta_profile/widgets/stat_obj.dart';

class Stats extends StatelessWidget {
  const Stats({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      padding:EdgeInsets.fromLTRB(8, 16, 8, 8),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          StatObj(
            count: 1,
            type: "Posts",
          ),
          StatObj(
            count: 436,
            type: "Followers",
          ),
          StatObj(
            count: 364,
            type: "Following",
          ),
        ],
      ),
    );
  }
}
