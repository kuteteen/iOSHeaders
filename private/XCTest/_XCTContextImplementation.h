//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCTActivityRecordStack, XCTestCase;

@interface _XCTContextImplementation : NSObject
{
    XCTActivityRecordStack *_activityRecordStack;
    XCTestCase *_testCase;
}

@property __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
@property(readonly) XCTActivityRecordStack *activityRecordStack; // @synthesize activityRecordStack=_activityRecordStack;
- (void)dealloc;
- (id)init;

@end
