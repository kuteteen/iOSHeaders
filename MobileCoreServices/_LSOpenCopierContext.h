//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface _LSOpenCopierContext : NSObject
{
    int _callbackType;
    NSURL *_destURL;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *destURL; // @synthesize destURL=_destURL;
@property(nonatomic) int callbackType; // @synthesize callbackType=_callbackType;
- (void)dealloc;

@end

