//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@interface _CATProxyWaitToken : NSObject
{
    // Error parsing type: AB, name: mFinished
    NSObject<OS_dispatch_group> *mGroup;
    _Bool _isExclusive;
    id _resourceProxy;
}

@property(readonly, nonatomic) id resourceProxy; // @synthesize resourceProxy=_resourceProxy;
@property(readonly, nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)notifyWithResourceProxy:(id)arg1;
- (void)dealloc;
- (id)initWithExclusive:(_Bool)arg1 group:(id)arg2;

@end

