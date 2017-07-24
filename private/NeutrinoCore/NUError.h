//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NUError : NSError
{
}

+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3;
+ (id)timeoutError:(id)arg1 object:(id)arg2;
+ (id)canceledError:(id)arg1 object:(id)arg2;
+ (id)unsupportedError:(id)arg1 object:(id)arg2;
+ (id)duplicateError:(id)arg1 object:(id)arg2;
+ (id)unknownError:(id)arg1 object:(id)arg2;
+ (id)rangeError:(id)arg1 object:(id)arg2;
+ (id)mismatchError:(id)arg1 object:(id)arg2;
+ (id)extraError:(id)arg1 object:(id)arg2;
+ (id)missingError:(id)arg1 object:(id)arg2;
+ (id)invalidError:(id)arg1 object:(id)arg2;
+ (id)failureError:(id)arg1 object:(id)arg2;
+ (id)rootError:(id)arg1;
+ (id)underlyingError:(id)arg1;
@property(readonly) id invalidObject;
@property(readonly) NSString *nonLocalizedFailureReason;
- (id)errorCodeDescription;
- (id)descriptionWithIndent:(long long)arg1;
- (id)description;

@end
