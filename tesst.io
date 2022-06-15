void setup()
{
	Serial.begin(9600);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	//  pinMode(4,OUTPUT);
}

void loop()
{
	int l[6], b[6];
	l[1] = analogRead(0);
	l[2] = analogRead(1);
	l[3] = analogRead(2);
	l[4] = analogRead(3);
	l[5] = analogRead(4);
	l[6] = analogRead(5);
	if (l[1] < 570)
		b[1] = 1;
	else
		b[1] = 0;
	if (l[2] < 531)
		b[2] = 1;
	else
		b[2] = 0;
	if (l[3] < 538)
		b[3] = 1;
	else
		b[3] = 0;
	if (l[4] < 436)
		b[4] = 1;
	else
		b[4] = 0;
	if (l[5] < 519)
		b[5] = 1;
	else
		b[5] = 0;
	if (l[6] < 577)
		b[6] = 1;
	else
		b[6] = 0;
	//  for (int i=1;i<=6;i++)
	//    if (l[i]<410)
	//      l[1] = 1;
	//    else l[i] = 0;
	//  if (l[1] > 370
	Serial.print(l[1]);
	Serial.print("\t");
	Serial.print(l[2]);
	Serial.print("\t");
	Serial.print(l[3]);
	Serial.print("\t");
	Serial.print(l[4]);
	Serial.print("\t");
	Serial.print(l[5]);
	Serial.print("\t");
	Serial.print(l[6]);
	Serial.println("\t");
	//  Serial.println(l[2]);
	//  if (x<370 && y<370) {
	//    digitalWrite(4,HIGH);
	//  }
	//  else {
	//    digitalWrite(4,LOW);
	//  }
	delay(500);
}