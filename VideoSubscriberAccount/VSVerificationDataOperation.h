//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional;

@interface VSVerificationDataOperation : VSAsyncOperation
{
    VSOptional *_result;
}

@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithData:(id)arg1;
- (id)init;

@end

