//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContactUpdate.h>

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate : CNContactUpdate
{
    CNMultiValuePropertyDescription *_property;
    CNMultiValueDiff *_diff;
}

@property(readonly) CNMultiValueDiff *diff; // @synthesize diff=_diff;
@property(readonly) CNMultiValuePropertyDescription *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 error:(id *)arg3;

@end

