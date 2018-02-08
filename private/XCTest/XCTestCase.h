//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTest.h>

#import "XCTActivity.h"
#import "XCTWaiterDelegate.h"

@class NSDictionary, NSInvocation, NSString, XCTestCaseRun, XCUITestContext, _XCTestCaseImplementation;

@interface XCTestCase : XCTest <XCTWaiterDelegate, XCTActivity>
{
    id _internalImplementation;
}

+ (id)_baselineDictionary;
+ (_Bool)_treatMissingBaselinesAsTestFailures;
+ (id)knownMemoryMetrics;
+ (id)measurementFormatter;
+ (id)defaultPerformanceMetrics;
+ (_Bool)_reportPerformanceFailuresForLargeImprovements;
+ (_Bool)_enableSymbolication;
+ (id)testInvocations;
+ (_Bool)isInheritingTestCases;
+ (id)_testStartActvityDateFormatter;
+ (id)bundle;
+ (id)testCaseWithSelector:(SEL)arg1;
+ (id)testCaseWithInvocation:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (id)defaultTestSuite;
+ (id)performFailableBlock:(CDUnknownBlockType)arg1 shouldInterruptTest:(_Bool *)arg2;
+ (id)allTestMethodInvocations;
+ (void)_allTestMethodInvocations:(id)arg1;
+ (id)testMethodInvocations;
+ (id)allSubclasses;
@property(retain) _XCTestCaseImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void).cxx_destruct;
- (void)removeUIInterruptionMonitor:(id)arg1;
- (id)addUIInterruptionMonitorWithDescription:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) XCUITestContext *testContext;
- (void)_dequeueAndReportBackgroundAttachments;
- (void)addAttachment:(id)arg1;
@property(readonly) NSDictionary *activityAggregateStatistics;
@property(readonly) unsigned long long activityRecordStackDepth;
- (void)runActivityNamed:(id)arg1 inScope:(CDUnknownBlockType)arg2;
- (void)startActivityWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)startActivityWithTitle:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)measureMetrics:(id)arg1 automaticallyStartMeasuring:(_Bool)arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)registerDefaultMetrics;
- (id)baselinesDictionaryForTest;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3 defaultBaselinesForPerfMetricID:(id)arg4;
- (void)registerMetricID:(id)arg1 name:(id)arg2 unitString:(id)arg3;
- (void)registerMetricID:(id)arg1 name:(id)arg2 unit:(id)arg3;
- (void)reportMetric:(id)arg1 reportFailures:(_Bool)arg2;
- (void)reportMeasurements:(id)arg1 forMetricID:(id)arg2 reportFailures:(_Bool)arg3;
- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (id)_symbolicationRecordForTestCodeInAddressStack:(id)arg1;
- (void)measureBlock:(CDUnknownBlockType)arg1;
- (void)stopMeasuring;
- (void)startMeasuring;
- (_Bool)_isMeasuringMetrics;
- (_Bool)_didStopMeasuring;
- (_Bool)_didStartMeasuring;
- (_Bool)_didMeasureMetrics;
- (id)_perfMetricsForID;
- (void)_logMemoryGraphDataFromFilePath:(id)arg1 withTitle:(id)arg2;
- (void)_logMemoryGraphData:(id)arg1 withTitle:(id)arg2;
- (unsigned long long)numberOfTestIterationsForTestWithSelector:(SEL)arg1;
- (void)afterTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)beforeTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)tearDownTestWithSelector:(SEL)arg1;
- (void)setUpTestWithSelector:(SEL)arg1;
- (void)_addTeardownBlock:(CDUnknownBlockType)arg1;
- (void)addTeardownBlock:(CDUnknownBlockType)arg1;
- (void)_purgeTeardownBlocks;
- (void)_runTeardownBlocks;
- (id)_dequeueTeardownBlocks;
- (void)_performTearDownSequenceWithSelector:(SEL)arg1;
- (void)performTest:(id)arg1;
- (void)_reportFailuresForUnwaitedExpectations;
- (void)_reportFailuresAtFile:(id)arg1 line:(unsigned long long)arg2 forTestAssertionsInScope:(CDUnknownBlockType)arg3;
- (void)invokeTest;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)_interruptTest;
@property(nonatomic) _Bool shouldHaltWhenReceivesControl;
@property _Bool continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun;
@property(retain) NSInvocation *invocation;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)nameForLegacyLogging;
@property(readonly, copy) NSString *name;
- (id)languageAgnosticTestMethodName;
- (unsigned long long)testCaseCount;
- (id)bundle;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)init;
- (void)nestedWaiter:(id)arg1 wasInterruptedByTimedOutWaiter:(id)arg2;
- (void)waiter:(id)arg1 didFulfillInvertedExpectation:(id)arg2;
- (void)waiter:(id)arg1 fulfillmentDidViolateOrderingConstraintsForExpectation:(id)arg2 requiredExpectation:(id)arg3;
- (void)waiter:(id)arg1 didTimeoutWithUnfulfilledExpectations:(id)arg2;
- (id)expectationForPredicate:(id)arg1 evaluatedWithObject:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)expectationForNotification:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 expectedValue:(id)arg3;
- (id)expectationWithDescription:(id)arg1;
- (void)_addExpectation:(id)arg1;
- (void)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(_Bool)arg3;
- (void)waitForExpectations:(id)arg1 timeout:(double)arg2;
- (void)waitForExpectationsWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_expectationForDarwinNotification:(id)arg1;
- (void)_performTurningExceptionsIntoFailuresInterruptAfterHandling:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)_recordActivityWithFailure:(id)arg1;
- (void)_recordFailure:(id)arg1;
- (void)_recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)_enqueueFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4 breakWhenDequeued:(_Bool)arg5;
- (void)_dequeueFailures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

