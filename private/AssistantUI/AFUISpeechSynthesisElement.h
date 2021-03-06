//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SAUIAudioData, VSPresynthesizedAudioRequest, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject
{
    NSString *_text;
    _Bool _isPhonetic;
    _Bool _eligibleForSynthesis;
    _Bool _provisional;
    _Bool _preprationBlockCompleted;
    _Bool _durationHasElapsed;
    SAUIAudioData *_audioData;
    NSString *_identifier;
    NSString *_language;
    NSString *_gender;
    VSSpeechRequest *_speechRequest;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    long long _synthesisResult;
    id <AFUISpeechSynthesisElementDelegate> _delegate;
    NSString *_animationIdentifier;
    NSDictionary *_analyticsContext;
    NSDictionary *_speakableContextInfo;
    CDUnknownBlockType _completion;
}

@property(setter=_setDurationHasElapsed:) _Bool durationHasElapsed; // @synthesize durationHasElapsed=_durationHasElapsed;
@property(setter=_setPreparationBlockCompleted:) _Bool preprationBlockCompleted; // @synthesize preprationBlockCompleted=_preprationBlockCompleted;
@property(readonly, nonatomic, getter=_completion) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSDictionary *speakableContextInfo; // @synthesize speakableContextInfo=_speakableContextInfo;
@property(readonly, nonatomic) NSDictionary *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(readonly, nonatomic) NSString *animationIdentifier; // @synthesize animationIdentifier=_animationIdentifier;
@property(nonatomic) __weak id <AFUISpeechSynthesisElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long synthesisResult; // @synthesize synthesisResult=_synthesisResult;
@property(retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest; // @synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest;
@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(readonly, nonatomic, getter=isProvisional) _Bool provisional; // @synthesize provisional=_provisional;
@property(nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) _Bool eligibleForSynthesis; // @synthesize eligibleForSynthesis=_eligibleForSynthesis;
@property(nonatomic) _Bool isPhonetic; // @synthesize isPhonetic=_isPhonetic;
@property(readonly, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SAUIAudioData *audioData; // @synthesize audioData=_audioData;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)description;
- (id)init;
- (id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(_Bool)arg6 eligibleAfterDuration:(double)arg7 preparation:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9 animationIdentifier:(id)arg10 analyticsContext:(id)arg11 speakableContextInfo:(id)arg12;

@end

