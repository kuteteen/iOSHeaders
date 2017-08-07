//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCAXClient_iOS, XCAccessibilityElement, XCElementSnapshot, XCUIApplicationImpl, XCUIApplicationMonitor;
@protocol OS_dispatch_queue, XCTRunnerAutomationSession;

@interface XCUIApplicationProcess : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _accessibilityActive;
    unsigned long long _applicationState;
    int _processID;
    id _token;
    int _exitCode;
    _Bool _eventLoopHasIdled;
    _Bool _hasReceivedEventLoopHasIdled;
    _Bool _animationsHaveFinished;
    _Bool _hasReceivedAnimationsHaveFinished;
    _Bool _hasExitCode;
    _Bool _hasCrashReport;
    XCUIApplicationImpl *_applicationImplementation;
    id <XCTRunnerAutomationSession> _automationSession;
    XCElementSnapshot *_lastSnapshot;
    XCUIApplicationMonitor *_applicationMonitor;
    XCAXClient_iOS *_AXClient_iOS;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
@property XCAXClient_iOS *AXClient_iOS; // @synthesize AXClient_iOS=_AXClient_iOS;
@property XCUIApplicationMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(retain) id <XCTRunnerAutomationSession> automationSession; // @synthesize automationSession=_automationSession;
@property _Bool hasCrashReport; // @synthesize hasCrashReport=_hasCrashReport;
@property _Bool hasExitCode; // @synthesize hasExitCode=_hasExitCode;
- (void)terminate;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;
- (void)waitForAutomationSession;
- (void)waitForQuiescenceIncludingAnimationsIdle:(_Bool)arg1;
@property _Bool hasReceivedAnimationsHaveFinished;
@property _Bool animationsHaveFinished;
@property _Bool hasReceivedEventLoopHasIdled;
@property _Bool eventLoopHasIdled;
@property int exitCode;
@property(retain) id token;
@property(nonatomic) int processID;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
- (void)_awaitKnownApplicationState;
@property(nonatomic) unsigned long long applicationState;
@property XCUIApplicationImpl *applicationImplementation; // @synthesize applicationImplementation=_applicationImplementation;
@property(nonatomic) _Bool accessibilityActive;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement;
- (id)shortDescription;
- (id)_queue_description;
- (id)description;
- (id)init;
- (id)initWithApplicationMonitor:(id)arg1 AXInterface:(id)arg2;
- (void)dealloc;

@end

