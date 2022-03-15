Future<void> hello(int num) async {
  print('Ngang day');
  await Future.delayed(Duration(seconds: 1));
  print('Hello day: $num');
}

void main() {
  hello(1);
  hello(2);
}
