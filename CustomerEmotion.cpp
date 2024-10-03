#include "CustomerEmotion.h"

CustomerEmotion::CustomerEmotion() : emotionValue(5), lastUpdateTime(std::chrono::steady_clock::now()) {}

void CustomerEmotion::updateEmotion()
{
    auto now = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed = now - lastUpdateTime;

    if (elapsed.count() >= 1.0)
    {
        if (emotionValue > 1)
        {
            emotionValue--;
        }
        lastUpdateTime = now;
    }
}

void CustomerEmotion::setEmotionToMax()
{
    emotionValue = 5;
}

int CustomerEmotion::getEmotionValue() const
{
    return emotionValue;
}
