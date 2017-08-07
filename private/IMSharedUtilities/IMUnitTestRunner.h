//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/XCTestObservation-Protocol.h>

@class NSString;
@protocol IMUnitTestRunnerDelegate;

@interface IMUnitTestRunner : NSObject <XCTestObservation>
{
    id <IMUnitTestRunnerDelegate> _delegate;
}

@property(nonatomic) __weak id <IMUnitTestRunnerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(id)arg1;
- (id)descriptionFromResult:(id)arg1;
- (id)dateFormatter;
- (void)testLogWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)writeOutputToStdout:(id)arg1;
- (void)testLogWithFormat:(id)arg1;
- (id)logFileHandle;
- (id)runTestsInBundleNamed:(id)arg1 error:(id *)arg2;
- (id)pathToPluginBundle:(id)arg1;
- (id)runTestsInBundleAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)loadXCTestFramework;
@property(readonly, nonatomic) NSString *defaultPathToXCTestFramework;
- (id)loadTestBundle:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

