//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface MPStorePumpkinServiceController : NSObject
{
    NSOperationQueue *_queue;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)arg1;
+ (id)sharedController;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)init;

@end

