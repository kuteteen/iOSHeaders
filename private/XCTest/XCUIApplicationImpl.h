//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCAccessibilityElement, XCUIApplicationMonitor, XCUIApplicationProcess;

@interface XCUIApplicationImpl : NSObject
{
    _Bool _supportsAutomationSession;
    _Bool _codeCoverageEnabled;
    id <XCUIXcodeApplicationManaging> _xcodeInterface;
    XCUIApplicationMonitor *_applicationMonitor;
    id <XCUIAccessibilityInterface> _axInterface;
    NSString *_path;
    NSString *_bundleID;
    XCUIApplicationProcess *_currentProcess;
}

+ (id)keyPathsForValuesAffectingActivated;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingState;
@property _Bool codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property _Bool supportsAutomationSession; // @synthesize supportsAutomationSession=_supportsAutomationSession;
@property(retain, nonatomic) XCUIApplicationProcess *currentProcess; // @synthesize currentProcess=_currentProcess;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly) id <XCUIAccessibilityInterface> axInterface; // @synthesize axInterface=_axInterface;
@property(readonly) XCUIApplicationMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(readonly) id <XCUIXcodeApplicationManaging> xcodeInterface; // @synthesize xcodeInterface=_xcodeInterface;
- (void).cxx_destruct;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;
- (void)handleCrashUnderSymbol:(id)arg1;
- (void)terminate;
- (void)_waitOnActivationExpectation:(id)arg1;
- (id)_activationExpectation;
- (void)waitForAccessibilityActive;
- (void)_waitForValidPID;
- (void)_launchUsingPlatformWithArguments:(id)arg1 environment:(id)arg2;
- (_Bool)_shouldRetryForLaunchError:(id)arg1;
- (void)_launchUsingXcodeWithArguments:(id)arg1 environment:(id)arg2;
- (void)_waitForLaunchProgressWithToken:(id)arg1;
- (void)_launchWithRequest:(id)arg1;
- (void)_activateForPlatform;
- (void)_activate;
- (void)serviceOpenRequest:(id)arg1;
@property(readonly) _Bool activated;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
- (void)_awaitValidCurrentProcess;
- (_Bool)waitForState:(unsigned long long)arg1 timeout:(double)arg2;
@property(nonatomic) unsigned long long state;
@property(nonatomic) int processID;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2 xcodeInterface:(id)arg3 applicationMonitor:(id)arg4 axInterface:(id)arg5;

@end

