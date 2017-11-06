//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AUInterfaceIOV3;

struct AUPreset {
    int _field1;
    struct __CFString *_field2;
};

struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>;

struct AVAudio3DAngularOrientation {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DPoint {
    float _field1;
    float _field2;
    float _field3;
};

struct AVAudio3DVectorOrientation {
    struct AVAudio3DPoint _field1;
    struct AVAudio3DPoint _field2;
};

struct AVAudioConverterPrimeInfo {
    unsigned int _field1;
    unsigned int _field2;
};

struct AVAudioEndpointDetectorUtility {
    void *_field1;
};

struct AVAudioEngineGraph;

struct AVAudioEngineImpl {
    id _field1;
    struct AVAudioEngineGraph *_field2;
    _Bool _field3;
    _Bool _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    struct AVAudioIOUnit *_field9;
    id _field10;
    int _field11;
    _Bool _field12;
    struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> _field13;
};

struct AVAudioIOUnit {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    struct AVAudioEngineImpl *_field3;
    struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> _field4;
    id _field5;
    id _field6;
};

struct AVAudioMixingImpl {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    float _field3;
    unsigned int _field4;
    float _field5;
    float _field6;
    struct AVAudio3DPoint _field7;
    float _field8;
    float _field9;
};

struct AVAudioPlayerCpp {
    struct __CFData *_field1;
    struct __CFURL *_field2;
    struct __CFDictionary *_field3;
    unsigned int _field4;
    struct AudioStreamBasicDescription _field5;
    struct AudioStreamBasicDescription _field6;
    unsigned long long _field7;
    char *_field8;
    unsigned int _field9;
    struct AudioFormatListItem *_field10;
    unsigned int _field11;
    struct OpaqueAudioFileID *_field12;
    unsigned int _field13;
    struct OpaqueAudioQueue *_field14;
    long long _field15;
    long long _field16;
    long long _field17;
    double _field18;
    double _field19;
    double _field20;
    double _field21;
    unsigned int _field22;
    double _field23;
    int _field24;
    struct AudioFilePacketTableInfo _field25;
    int _field26;
    int _field27;
    int _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    unsigned int _field33;
    _Bool _field34;
    _Bool _field35;
    _Bool _field36;
    _Bool _field37;
    double _field38;
    double _field39;
    double _field40;
    double _field41;
    double _field42;
    double _field43;
    struct __CFString *_field44;
    unsigned int _field45;
    struct AudioQueueLevelMeterState *_field46;
    struct AudioQueueBuffer *_field47[3];
    struct AudioQueueBuffer *_field48;
    int _field49;
    _Bool _field50;
    _Bool _field51;
    _Bool _field52;
    _Bool _field53;
    _Bool _field54;
    struct AudioQueueBuffer *_field55;
    _Bool _field56;
    unsigned long long _field57;
    unsigned int _field58;
    _Bool _field59;
    _Bool _field60;
    _Bool _field61;
    _Bool _field62;
    long long _field63;
    int _field64;
    unsigned int _field65;
    unsigned int _field66;
    void *_field67;
    CDUnknownFunctionPointerType _field68;
    unsigned int _field69;
    id _field70;
    unsigned int _field71;
    struct TEMP_AudioQueueChannelAssignment *_field72;
};

struct AVAudioSequencerImpl {
    struct OpaqueMusicPlayer *_field1;
    struct OpaqueMusicSequence *_field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
};

struct AVAudioSessionImpl {
    id _field1;
    struct GenericRunLoopThread *_field2;
    id _field3;
    id _field4;
    struct KVOProperty<float> _field5;
    struct KVOProperty<float> _field6;
    struct KVONSArrayProperty _field7;
    struct KVONSArrayProperty _field8;
    struct KVOProperty<unsigned int> _field9;
    struct KVOProperty<unsigned int> _field10;
    struct KVONSObjectProperty<NSArray *> _field11;
    struct KVOProperty<unsigned int> _field12;
    id _field13;
    _Bool _field14;
    struct KVOProperty<unsigned int> _field15;
    struct KVOProperty<unsigned int> _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    int _field20;
    unsigned long long _field21;
};

struct AVAudioUnitComponentManagerImpl {
    CDUnknownFunctionPointerType *_field1;
    struct __CFArray *_field2;
    struct __CFArray *_field3;
    struct __CFArray *_field4;
};

struct AVAudioUnitEQFilterParametersImpl {
    CDUnknownFunctionPointerType *_field1;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioChannelDescription {
    unsigned int _field1;
    unsigned int _field2;
    float _field3[3];
};

struct AudioChannelLayout {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct AudioChannelDescription _field4[1];
};

struct AudioComponentDescription {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct AudioFilePacketTableInfo {
    long long _field1;
    int _field2;
    int _field3;
};

struct AudioFormatListItem;

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioQueueLevelMeterState;

struct AudioRecorderImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
    struct OpaqueAudioFileID *_field9;
    struct OpaqueAudioQueue *_field10;
    long long _field11;
    long long _field12;
    long long _field13;
    double _field14;
    double _field15;
    double _field16;
    unsigned long long _field17;
    char *_field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    struct AudioQueueLevelMeterState *_field27;
    struct AudioQueueBuffer *_field28[4];
    struct AudioQueueBuffer *_field29;
    _Bool _field30;
    unsigned long long _field31;
    _Bool _field32;
    int _field33;
    id _field34;
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

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct CAMutex {
    CDUnknownFunctionPointerType *_field1;
    char *_field2;
    struct _opaque_pthread_t *_field3;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field4;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct ChannelDescriptionImpl {
    id _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct ControllerImpl {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    struct CAStreamBasicDescription _field4;
    double _field5;
    _Bool _field6;
    struct AudioQueueLevelMeterState *_field7;
    struct GenericRunLoopThread *_field8;
    struct OpaqueAudioQueue *_field9;
    int _field10;
    struct OpaqueAudioConverter *_field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    struct AudioQueueBuffer **_field16;
    int _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    float _field24;
    id _field25;
    struct __CFDictionary *_field26;
    unsigned int _field27;
    struct AudioTimeStamp _field28;
    id _field29;
    id _field30;
    struct CAStreamBasicDescription _field31;
    double _field32;
    struct OpaqueAudioQueue *_field33;
    int _field34;
    id _field35;
    unsigned int _field36;
    struct AudioQueueBuffer **_field37;
    int _field38;
    _Bool _field39;
    _Bool _field40;
    _Bool _field41;
    _Bool _field42;
    _Bool _field43;
    _Bool _field44;
    float _field45;
    unsigned int _field46;
    struct CAStreamBasicDescription _field47;
    long long _field48;
    struct OpaqueAudioQueue *_field49;
    struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> _field50;
    struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> _field51;
    int _field52;
    int _field53;
    int _field54;
    unsigned char _field55;
    unsigned char _field56;
    unsigned char _field57;
    int _field58;
    int _field59;
    float _field60;
    double _field61;
    unsigned long long _field62;
    unsigned long long _field63;
    float _field64;
    float _field65;
    _Bool _field66;
    id _field67;
    struct OpaqueAudioFileID *_field68;
    unsigned int _field69;
    struct AudioFormatListItem *_field70;
    unsigned int _field71;
    unsigned long long _field72;
    char *_field73;
    struct AudioFilePacketTableInfo _field74;
    long long _field75;
    long long _field76;
    _Bool _field77;
    int _field78;
    int _field79;
    id _field80;
    _Bool _field81;
    _Bool _field82;
    _Bool _field83;
    _Bool _field84;
    int _field85;
    double _field86;
    double _field87;
    double _field88;
    _Bool _field89;
    _Bool _field90;
    _Bool _field91;
    id _field92;
    unsigned char _field93;
    int _field94;
    _Bool _field95;
    _Bool _field96;
    _Bool _field97;
    struct CAStreamBasicDescription _field98;
    unsigned int _field99;
    int _field100;
    _Bool _field101;
    unsigned int _field102;
    long long _field103;
    id _field104;
    struct MyMutex *_field105[4];
    int _field106;
    int _field107;
    int _field108;
    unsigned long long _field109;
    _Bool _field110;
    int _field111;
    int _field112;
    struct ZeroRunLog _field113[75];
    _Bool _field114;
    _Bool _field115;
    id _field116;
    id _field117;
    struct AudioBufferList *_field118;
    void *_field119;
};

struct DataSourceDescriptionImpl {
    unsigned int _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
};

struct EndpointVAD3FileSaver;

struct EndpointVAD3Host {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    float _field3;
    float _field4;
    struct CAStreamBasicDescription _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    struct AVAudioEndpointDetectorUtility _field10;
    id _field11;
    struct OpaqueAudioComponentInstance *_field12;
    struct unique_ptr<EndpointVAD3FileSaver, std::__1::default_delete<EndpointVAD3FileSaver>> _field13;
    struct AudioTimeStamp _field14;
    struct vector<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>, std::__1::allocator<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>>> _field15;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field16;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field17;
    struct vector<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>, std::__1::allocator<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>>> _field18;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field19;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field20;
    struct vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>> _field21;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field22;
    struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> _field23;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field24;
    struct basic_ofstream<char, std::__1::char_traits<char>> _field25;
};

struct GenericRunLoopThread;

struct KVONSArrayProperty {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVONSObjectProperty<NSArray *> {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVOProperty<float> {
    CDUnknownFunctionPointerType *_field1;
    float _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct KVOProperty<unsigned int> {
    CDUnknownFunctionPointerType *_field1;
    unsigned int _field2;
    id _field3;
    id _field4;
    _Bool _field5;
};

struct MIDIPlayerImpl {
    struct OpaqueAUGraph *_field1;
    struct OpaqueMusicPlayer *_field2;
    struct OpaqueMusicSequence *_field3;
    double _field4;
    CDUnknownBlockType _field5;
    id _field6;
};

struct MusicTrackImpl {
    struct OpaqueMusicTrack *_field1;
    id _field2;
    _Bool _field3;
    unsigned int _field4;
};

struct MyAudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
    struct AudioStreamBasicDescription _field8;
};

struct MyMutex;

struct OpaqueAUGraph;

struct OpaqueAudioComponentInstance;

struct OpaqueAudioConverter;

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct OpaqueMusicPlayer;

struct OpaqueMusicSequence;

struct OpaqueMusicTrack;

struct PortDescriptionImpl {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    _Bool _field6;
    _Bool _field7;
    unsigned long long _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
};

struct RouteDescriptionImpl {
    id _field1;
    id _field2;
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct TEMP_AudioQueueChannelAssignment;

struct ZeroRunLog {
    int _field1;
    int _field2;
};

struct _AVBeatRange {
    double _field1;
    double _field2;
};

struct __CFArray;

struct __CFDictionary;

struct __CFString;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct basic_filebuf<char, std::__1::char_traits<char>> {
    CDUnknownFunctionPointerType *_field1;
    struct locale _field2;
    char *_field3;
    char *_field4;
    char *_field5;
    char *_field6;
    char *_field7;
    char *_field8;
    char *_field9;
    char *_field10;
    char *_field11;
    char _field12[8];
    unsigned long long _field13;
    char *_field14;
    unsigned long long _field15;
    struct __sFILE *_field16;
    struct codecvt<char, char, __mbstate_t> *_field17;
    CDUnion_4426d289 _field18;
    CDUnion_4426d289 _field19;
    unsigned int _field20;
    unsigned int _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
};

struct basic_ofstream<char, std::__1::char_traits<char>> {
    CDUnknownFunctionPointerType *_field1;
    struct basic_filebuf<char, std::__1::char_traits<char>> _field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned int _field4;
    long long _field5;
    long long _field6;
    unsigned int _field7;
    unsigned int _field8;
    void *_field9;
    void *_field10;
    CDUnknownFunctionPointerType *_field11;
    int *_field12;
    unsigned long long _field13;
    unsigned long long _field14;
    long long *_field15;
    unsigned long long _field16;
    unsigned long long _field17;
    void **_field18;
    unsigned long long _field19;
    unsigned long long _field20;
    struct basic_ostream<char, std::__1::char_traits<char>> *_field21;
    int _field22;
};

struct basic_ostream<char, std::__1::char_traits<char>>;

struct codecvt<char, char, __mbstate_t>;

struct locale {
    struct __imp *_field1;
};

struct map<AVVoiceAlertType, AudioQueueBuffer *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, AudioQueueBuffer *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, AudioQueueBuffer *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<AVVoiceAlertType, NSURL *, std::__1::less<AVVoiceAlertType>, std::__1::allocator<std::__1::pair<const AVVoiceAlertType, NSURL *>>> {
    struct __tree<std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>, std::__1::allocator<std::__1::__value_type<AVVoiceAlertType, NSURL *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVVoiceAlertType, NSURL *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVVoiceAlertType, std::__1::__value_type<AVVoiceAlertType, NSURL *>, std::__1::less<AVVoiceAlertType>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct unique_ptr<AUInterfaceIOV3, std::__1::default_delete<AUInterfaceIOV3>> {
    struct __compressed_pair<AUInterfaceIOV3 *, std::__1::default_delete<AUInterfaceIOV3>> {
        struct AUInterfaceIOV3 *_field1;
    } _field1;
};

struct unique_ptr<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
    struct __compressed_pair<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>*, std::__1::default_delete<AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)>>> {
        struct AVAEBlock<AVAudioEngineManualRenderingStatus (^)(unsigned int, AudioBufferList *, int *)> *_field1;
    } _field1;
};

struct unique_ptr<EndpointVAD3FileSaver, std::__1::default_delete<EndpointVAD3FileSaver>> {
    struct __compressed_pair<EndpointVAD3FileSaver *, std::__1::default_delete<EndpointVAD3FileSaver>> {
        struct EndpointVAD3FileSaver *_field1;
    } _field1;
};

struct vector<AVVADState, std::__1::allocator<AVVADState>>;

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>, std::__1::allocator<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>>> {
    struct vector<AVVADState, std::__1::allocator<AVVADState>> *_field1;
    struct vector<AVVADState, std::__1::allocator<AVVADState>> *_field2;
    struct __compressed_pair<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>*, std::__1::allocator<std::__1::vector<AVVADState, std::__1::allocator<AVVADState>>>> {
        struct vector<AVVADState, std::__1::allocator<AVVADState>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
    vector_8f06c10f *_field1;
    vector_8f06c10f *_field2;
    struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double>>*, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
        vector_8f06c10f *_field1;
    } _field3;
};

struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>;

struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
    struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> *_field1;
    struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>>>> {
        struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>> {
    vector_f672cb0f *_field1;
    vector_f672cb0f *_field2;
    struct __compressed_pair<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>*, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>> {
        vector_f672cb0f *_field1;
    } _field3;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
} vector_8f06c10f;

typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
} vector_f672cb0f;

#pragma mark Typedef'd Unions

typedef union {
    char _field1[128];
    long long _field2;
} CDUnion_4426d289;

