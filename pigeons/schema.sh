flutter pub run pigeon \
  --input pigeons/schema.dart \
  --dart_out lib/schema.dart \
  --objc_header_out ios/Flutter/FlutterPluginRegistrant/Classes/schema.h \
  --objc_source_out ios/Flutter/FlutterPluginRegistrant/Classes/schema.m \
  --java_out android/Flutter/src/main/java/io/flutter/plugins/Schema.java \
  --java_package "io.flutter.plugins"

  # 点击绿色三角形按钮，或者选择文件右键选择运行此文件，开启运行以上脚本文件，
  # 然后会自动生产跨端通信的Android文件(Java文件)和iOS文件（Object_C）
 No newline at end of file
