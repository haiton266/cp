class Async {
  Async();
  Future<void> run(String name, List<int> list) async {
    for (var i = 0; i < list.length; i++) {
      var value = list[i];
      await Future.delayed(Duration(milliseconds: value));
      print('$name -> $value');
    }
  }
}

void main() {
  Async().run('list1', [200, 1000, 1300, 1500]);
  Async().run('list2', [500, 100, 500, 100]);
}
