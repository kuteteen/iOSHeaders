//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/_MFAddressBookSearchOperation.h>

__attribute__((visibility("hidden")))
@interface _MFAddressBookPropertySearchOperation : _MFAddressBookSearchOperation
{
}

+ (int)property;
+ (id)operationWithAddressBook:(void *)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray **)arg2 identifiers:(const struct __CFArray **)arg3 properties:(const struct __CFArray **)arg4;
- (struct __CFArray *)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const struct __CFArray **)arg2 identifiers:(const struct __CFArray **)arg3;

@end

