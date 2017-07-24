//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct BatchBeepCanceller;

struct CSAudioCircularBufferImpl<unsigned short>;

struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> {
    struct __compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller>> {
        struct BatchBeepCanceller *__first_;
    } __ptr_;
};

struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
    struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short>*, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
        struct CSAudioCircularBufferImpl<unsigned short> *__first_;
    } __ptr_;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__first_;
    } __end_cap_;
};

struct vector<short, std::__1::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::__1::allocator<short>> {
        short *__first_;
    } __end_cap_;
};
