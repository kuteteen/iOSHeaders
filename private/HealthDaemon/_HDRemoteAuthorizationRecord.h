//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject
{
    HKAuthorizationRequestRecord *_record;
    CDUnknownBlockType _requestSentHandler;
    CDUnknownBlockType _requestFinishedHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType requestFinishedHandler; // @synthesize requestFinishedHandler=_requestFinishedHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType requestSentHandler; // @synthesize requestSentHandler=_requestSentHandler;
@property(readonly, nonatomic) HKAuthorizationRequestRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)initWithRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 requestFinishedHandler:(CDUnknownBlockType)arg3;

@end

