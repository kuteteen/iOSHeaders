//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@protocol CNiOSContactPredicate <NSObject>
- (_Bool)cn_supportsNativeSorting;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 error:(struct __CFError **)arg5;
@end

