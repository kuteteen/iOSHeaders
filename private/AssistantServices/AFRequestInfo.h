//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSNumber, NSString, SAStartLocalRequest, SAStartRequest;

@interface AFRequestInfo : NSObject <NSSecureCoding>
{
    _Bool _handoffRequiresUserInteraction;
    _Bool _suppressAlert;
    NSNumber *_notifyState;
    NSString *_text;
    NSString *_directAction;
    NSString *_handoffOriginDeviceName;
    NSData *_handoffRequestData;
    NSString *_handoffURLString;
    NSString *_handoffNotification;
    NSString *_correctedSpeech;
    NSDictionary *_correctedSpeechContext;
    SAStartRequest *_startRequest;
    SAStartLocalRequest *_startLocalRequest;
    long long _activationEvent;
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSString *_interactionId;
    NSNumber *_onDeviceUtterancesPresent;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
    NSString *_previousUtterance;
    NSString *_sessionId;
    NSString *_utteranceSource;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *utteranceSource; // @synthesize utteranceSource=_utteranceSource;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *previousUtterance; // @synthesize previousUtterance=_previousUtterance;
@property(copy, nonatomic) NSNumber *originalScore; // @synthesize originalScore=_originalScore;
@property(copy, nonatomic) NSNumber *originalRank; // @synthesize originalRank=_originalRank;
@property(copy, nonatomic) NSNumber *onDeviceUtterancesPresent; // @synthesize onDeviceUtterancesPresent=_onDeviceUtterancesPresent;
@property(copy, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
@property(copy, nonatomic) NSNumber *combinedScore; // @synthesize combinedScore=_combinedScore;
@property(copy, nonatomic) NSNumber *combinedRank; // @synthesize combinedRank=_combinedRank;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
@property(nonatomic) _Bool suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(copy, nonatomic) SAStartLocalRequest *startLocalRequest; // @synthesize startLocalRequest=_startLocalRequest;
@property(copy, nonatomic) SAStartRequest *startRequest; // @synthesize startRequest=_startRequest;
@property(copy, nonatomic) NSDictionary *correctedSpeechContext; // @synthesize correctedSpeechContext=_correctedSpeechContext;
@property(copy, nonatomic) NSString *correctedSpeech; // @synthesize correctedSpeech=_correctedSpeech;
@property(copy, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool handoffRequiresUserInteraction; // @synthesize handoffRequiresUserInteraction=_handoffRequiresUserInteraction;
@property(copy, nonatomic) NSString *handoffURLString; // @synthesize handoffURLString=_handoffURLString;
@property(copy, nonatomic) NSData *handoffRequestData; // @synthesize handoffRequestData=_handoffRequestData;
@property(copy, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(copy, nonatomic) NSString *directAction; // @synthesize directAction=_directAction;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSNumber *notifyState; // @synthesize notifyState=_notifyState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)requiresUserInteraction;

@end

