//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNContactTypeDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (id)nilValue;
- (Class)valueClass;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (id)CNValueFromABValue:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (int)abPropertyID:(int *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

