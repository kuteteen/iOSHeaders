//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitV2Bridge.h>

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge
{
    CDUnknownBlockType _outputProvider;
    CDUnknownBlockType _inputHandler;
    _Bool _inputWasEnabled;
    _Bool _outputWasEnabled;
}

- (void)stopHardware;
- (_Bool)startHardwareAndReturnError:(id *)arg1;
@property(nonatomic, getter=isOutputEnabled) _Bool outputEnabled;
@property(nonatomic, getter=isInputEnabled) _Bool inputEnabled;
- (_Bool)canPerformOutput;
- (_Bool)canPerformInput;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_inputHandler;
- (CDUnknownBlockType)outputProvider;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

