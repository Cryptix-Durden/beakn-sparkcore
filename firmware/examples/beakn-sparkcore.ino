int red = 5;
int yellow = 6;
int green = 7;

void setup() 
{
  Spark.function("setStatus", setStatus);

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
  for(int i = 5; i <= 7; i++)
  {
      digitalWrite(i, HIGH);
      delay(250);
      digitalWrite(i, LOW);
      delay(250);
  }
  
  reset();
}

void loop() 
{
}

void reset()
{
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW); 
}

int setStatus(String status)
{
  reset();
  
  if(status == "Busy" || status == "DoNotDisturb"){
    digitalWrite(red, HIGH);
  }else if(status == "Away" || status == "TemporarilyAway"){
    digitalWrite(yellow, HIGH);
  }else if (status == "Free"){
    digitalWrite(green, HIGH);
  }
  
  return 1;
}