//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProcessInfo;

@interface CNSuddenTerminationInhibitor : NSObject
{
    NSProcessInfo *_processInfo;
}

@property(retain, nonatomic) NSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProcessInfo:(id)arg1;
- (id)init;

@end

