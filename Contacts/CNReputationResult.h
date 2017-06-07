//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNReputationHandle;

__attribute__((visibility("hidden")))
@interface CNReputationResult : NSObject
{
    CNReputationHandle *_handle;
    long long _score;
}

+ (id)descriptionForScore:(long long)arg1;
@property(readonly) long long score; // @synthesize score=_score;
@property(readonly, copy) CNReputationHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithHandle:(id)arg1 score:(long long)arg2;

@end

