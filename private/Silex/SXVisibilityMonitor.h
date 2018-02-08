//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVisibilityMonitoring.h"
#import "SXVisibilityReporting.h"

@class NFStateMachine, NFStateMachineState, NSMutableArray, NSString;

@interface SXVisibilityMonitor : NSObject <SXVisibilityReporting, SXVisibilityMonitoring>
{
    _Bool _appeared;
    double _visiblePercentage;
    id _object;
    id <SXVisiblePercentageProviding> _visiblePercentageProvider;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_appearingState;
    NFStateMachineState *_appearedState;
    NFStateMachineState *_disappearingState;
    NFStateMachineState *_disappearedState;
    NSMutableArray *_willAppearBlocks;
    NSMutableArray *_didAppearBlocks;
    NSMutableArray *_visiblePercentageBlocks;
    NSMutableArray *_willDisappearBlocks;
    NSMutableArray *_didDisappearBlocks;
    long long _lockCount;
}

@property(nonatomic) long long lockCount; // @synthesize lockCount=_lockCount;
@property(readonly, nonatomic) NSMutableArray *didDisappearBlocks; // @synthesize didDisappearBlocks=_didDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *willDisappearBlocks; // @synthesize willDisappearBlocks=_willDisappearBlocks;
@property(readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // @synthesize visiblePercentageBlocks=_visiblePercentageBlocks;
@property(readonly, nonatomic) NSMutableArray *didAppearBlocks; // @synthesize didAppearBlocks=_didAppearBlocks;
@property(readonly, nonatomic) NSMutableArray *willAppearBlocks; // @synthesize willAppearBlocks=_willAppearBlocks;
@property(readonly, nonatomic) NFStateMachineState *disappearedState; // @synthesize disappearedState=_disappearedState;
@property(readonly, nonatomic) NFStateMachineState *disappearingState; // @synthesize disappearingState=_disappearingState;
@property(readonly, nonatomic) NFStateMachineState *appearedState; // @synthesize appearedState=_appearedState;
@property(readonly, nonatomic) NFStateMachineState *appearingState; // @synthesize appearingState=_appearingState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SXVisiblePercentageProviding> visiblePercentageProvider; // @synthesize visiblePercentageProvider=_visiblePercentageProvider;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
@property(readonly, nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
- (void).cxx_destruct;
- (void)determineVisiblePercentage;
- (void)didDisappear;
- (void)willDisappear;
- (void)updateVisibility;
- (void)didAppear;
- (void)willAppear;
- (void)onDidDisappear:(CDUnknownBlockType)arg1;
- (void)onWillDisappear:(CDUnknownBlockType)arg1;
- (void)onVisiblePercentageChange:(CDUnknownBlockType)arg1;
- (void)onDidAppear:(CDUnknownBlockType)arg1;
- (void)onWillAppear:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool locked;
- (void)unlock;
- (void)lock;
- (id)initWithObject:(id)arg1 visiblePercentageProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

