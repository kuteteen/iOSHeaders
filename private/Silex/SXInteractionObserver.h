//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXInteractionObserving.h"

@class NSString;

@interface SXInteractionObserver : NSObject <SXInteractionObserving>
{
    CDUnknownBlockType _willBlock;
    CDUnknownBlockType _didBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType didBlock; // @synthesize didBlock=_didBlock;
@property(readonly, nonatomic) CDUnknownBlockType willBlock; // @synthesize willBlock=_willBlock;
- (void).cxx_destruct;
- (void)didHandleInteractionWithGestureRecognizer:(id)arg1;
- (void)willHandleInteractionWithGestureRecognizer:(id)arg1;
- (void)didHandleInteractionWithControl:(id)arg1;
- (void)willHandleInteractionWithControl:(id)arg1;
- (id)initWithDidHandleInteractionBlock:(CDUnknownBlockType)arg1;
- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1;
- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1 didHandleInteractionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

