#ifndef CUSTOMEREMOTION_H
#define CUSTOMEREMOTION_H

#include <chrono>

class CustomerEmotion
{
public:
    CustomerEmotion();
    void updateEmotion();
    void setEmotionToMax();
    int getEmotionValue() const;

private:
    int emotionValue;
    std::chrono::steady_clock::time_point lastUpdateTime;
};

#endif
