# Report

2年後期レポート課題

　今回作成したものは、RaspberrypiとArduinoでシリアル通信をして、
モーター3つを動かすと言うものである。
　用意する部品は以下のとおりである。
	・ArduinoUNO
	・Raspberrypi（B＋以上推奨）
	・TA7291P ×３個
	・モーター　×３個
	・配線材
	・ブレッドボード
　Arduinoへのピン配置は、Digitalピンの２〜１０を使用、
それぞれモーター１（２、３〜、４）、モーター２（５〜、６、７）、
モーター３（８、９、１０〜）である。Analogピンとして使うピンは、
数字の後ろに（〜）がついているピンである。
　動作方法は、Arduinoに、Report_Motor_Drive.inoというプログラムを、
Arduino IDEというソフトを使ってArduinoUNOに書き込む、
次にpythonでReport_Serial.pyを起動する。
　モーターが5秒ごとに回りだしたら、成功である。
