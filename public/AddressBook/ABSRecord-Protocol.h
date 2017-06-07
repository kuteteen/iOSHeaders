//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABSAddressBook, ABSSource, NSString;
@protocol ABSCNImplementation;

@protocol ABSRecord <NSObject>
@property(retain, nonatomic) id <ABSCNImplementation> cnImpl;
@property(readonly, nonatomic) NSString *compositeName;
@property(nonatomic) __weak ABSSource *source;
@property(nonatomic) __weak ABSAddressBook *addressBook;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (void)replaceRecordStorageWithCNObject:(id <ABSCNImplementation>)arg1;
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;
- (_Bool)setValue:(const void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;
- (const void *)copyValueForProperty:(int)arg1;
@end
