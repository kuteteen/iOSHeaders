//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject
{
    HDCodableRoutineRequestMessage *_request;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) HDCodableRoutineRequestMessage *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end
