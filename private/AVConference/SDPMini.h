//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SDPMini : NSObject
{
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSString *origin;
    NSMutableArray *audioPayloads;
    NSMutableArray *secondaryAudioPayloads;
    NSString *sessionIP;
    NSNumber *audioRTPPort;
    NSNumber *audioRTCPPort;
    NSNumber *audioRTPID;
    NSNumber *videoRTPID;
    _Bool allowRTCPFB;
    NSNumber *answerBandwidth;
    NSNumber *maxBandwidth;
    _Bool allowsDynamicMaxBitrate;
    _Bool allowsContentsChangeWithAspectPreservation;
    NSDictionary *featuresListDict;
    NSNumber *aacBlockSize;
    NSNumber *audioUnitModel;
    _Bool allowAudioRecording;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}

+ (_Bool)setPayload:(int)arg1 mediaLine:(id)arg2;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording;
@property(nonatomic) _Bool allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation;
@property(retain, nonatomic) NSNumber *audioUnitModel; // @synthesize audioUnitModel;
@property(retain, nonatomic) NSNumber *aacBlockSize; // @synthesize aacBlockSize;
@property(retain, nonatomic) NSDictionary *featuresListDict; // @synthesize featuresListDict;
@property(nonatomic) _Bool allowsDynamicMaxBitrate; // @synthesize allowsDynamicMaxBitrate;
@property(retain, nonatomic) NSNumber *maxBandwidth; // @synthesize maxBandwidth;
@property(retain, nonatomic) NSNumber *answerBandwidth; // @synthesize answerBandwidth;
@property(nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB;
@property(retain, nonatomic) NSNumber *audioRTPID; // @synthesize audioRTPID;
@property(retain, nonatomic) NSNumber *audioRTCPPort; // @synthesize audioRTCPPort;
@property(retain, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort;
@property(retain, nonatomic) NSString *sessionIP; // @synthesize sessionIP;
@property(readonly, nonatomic) NSMutableArray *secondaryAudioPayloads; // @synthesize secondaryAudioPayloads;
@property(readonly, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads;
@property(retain, nonatomic) NSString *origin; // @synthesize origin;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag *)arg5 remoteSupportsHD:(_Bool)arg6 screenSharing:(_Bool)arg7;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (_Bool)getBasebandCodecType:(id *)arg1 sampleRate:(id *)arg2;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (id)toStringWithVideoEnabled:(_Bool)arg1;
- (_Bool)setVideoPayloads:(int *)arg1 count:(int)arg2;
- (id)mediaTypeToString:(int)arg1;
- (void)addMediaLine:(id)arg1 mediaType:(int)arg2;
- (id)getMediaLineForType:(int)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)init;
- (id)SDPUsername;
- (id)composeAudioString;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (id)composeFLSString;
- (id)composeSessionString;
- (id)composeBandwidthString;
- (void)parseAudioMediaAttributes:(id)arg1;
- (void)parseAudioFormatAttribute:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (void)parseSDPFromString:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)setVideoRTCPFB:(_Bool)arg1 useNACK:(_Bool)arg2;
- (_Bool)getUseSbr:(_Bool *)arg1 blockSize:(int *)arg2 forAACFormat:(int)arg3;
- (void)setUseSbr:(_Bool)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int *)arg2 pHeight:(int *)arg3;
- (int)rulesFramerate:(int)arg1;

@end

