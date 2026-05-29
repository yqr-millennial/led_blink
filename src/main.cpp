#include <Arduino.h>

// 1. 定义使用的GPIO引脚数组 (完全按照作业文档的引脚)
const int ledPins[] = {2, 4, 5, 18};
const int numLeds = 4;      // LED的总数量
int delayTime = 200;        // 延迟时间 (毫秒)。作业要求2就是让你修改这个数字！

void setup() {
  // 2. 初始化：循环遍历数组，将每个用到的引脚都设置为输出模式 (OUTPUT)
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // 3. 核心逻辑：依次点亮每个LED
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);  // 输出高电平：点亮当前LED
    delay(delayTime);                // 保持点亮状态一段时间
    digitalWrite(ledPins[i], LOW);   // 输出低电平：熄灭当前LED
  }
}