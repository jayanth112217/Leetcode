class FrequencyTracker {
    public:
    unordered_map<int,int>numCount;
    unordered_map<int,int>freqCount;
public:
    FrequencyTracker() {
       
    }
    
    void add(int number) {
      int oldNumCount = numCount[number];
      int newNumCount = ++numCount[number];
      freqCount[oldNumCount]--;
      freqCount[newNumCount]++;
    }
    
    void deleteOne(int number) {
       int oldNumCount = numCount[number];
       if(oldNumCount==0) return;
      int newNumCount = --numCount[number];
      freqCount[oldNumCount]--;
      freqCount[newNumCount]++;
    }
    
    bool hasFrequency(int frequency) {
     return (freqCount[frequency]!=0);
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */