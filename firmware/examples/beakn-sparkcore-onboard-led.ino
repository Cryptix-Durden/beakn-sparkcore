void setup() 
{
  Spark.function("setStatus", setStatus);
  RGB.control(true);  
}

void loop() 
{
}

int setStatus(String status)
{
  if(status == "Busy" || status == "DoNotDisturb"){
    RGB.color(255, 0, 0);
  }else if(status == "Away" || status == "TemporarilyAway"){
    RGB.color(255, 255, 0);
  }else if (status == "Free"){
    RGB.color(0, 255, 0);
  }
  
  return 1;
}
