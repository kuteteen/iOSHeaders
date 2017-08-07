//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioSessionMediaProperties : NSObject
{
    double _preferredSampleRate;
    double _preferredBlockSize;
    int _operatingMode;
    unsigned int _vpOperatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct AudioStreamBasicDescription _outputFormat;
    int _processId;
    _Bool _sessionActive;
}

@property(nonatomic, getter=isSessionActive) _Bool sessionActive; // @synthesize sessionActive=_sessionActive;
@property(nonatomic) int processId; // @synthesize processId=_processId;
@property(nonatomic) struct AudioStreamBasicDescription outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) unsigned int vpOperatingMode; // @synthesize vpOperatingMode=_vpOperatingMode;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) double preferredSampleRate; // @synthesize preferredSampleRate=_preferredSampleRate;
@property(nonatomic) double preferredBlockSize; // @synthesize preferredBlockSize=_preferredBlockSize;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

