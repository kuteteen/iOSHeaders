//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (CLSAdditions)
+ (_Bool)cls_assignError:(id *)arg1 fromError:(id)arg2;
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 errorObject:(id)arg3 format:(id)arg4;
+ (_Bool)cls_assignError:(id *)arg1 code:(long long)arg2 errorObject:(id)arg3 description:(id)arg4;
+ (id)cls_createErrorWithCode:(long long)arg1 format:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 format:(id)arg3;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 description:(id)arg3;
- (void)cls_log:(id)arg1;
- (id)cls_underlyingErrorWithDomain:(id)arg1;
- (_Bool)cls_isClassKitError;
@end

