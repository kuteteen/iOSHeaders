//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol FBSUIApplicationSystemServiceDelegate, OS_dispatch_queue;

@interface FBSUIApplicationSystemService : NSObject
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <FBSUIApplicationSystemServiceDelegate> _delegate;
}

@property(nonatomic) id <FBSUIApplicationSystemServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)suspendCurrentApplication;
@property(nonatomic) double currentBacklightLevel;
@property(readonly, nonatomic) double backgroundTimeRemaining;
- (_Bool)setNextWakeInterval:(double)arg1;
@property(copy, nonatomic) NSString *badgeString;
@property(nonatomic) long long badgeNumber;
- (id)_getBadgeValue;
- (long long)activeInterfaceOrientation;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

