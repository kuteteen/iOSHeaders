//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDDonationPreferences.h"

@class NSString;

@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences>
{
    _Bool _donationsEnabled;
}

@property(nonatomic, getter=isDonationsEnabled) _Bool donationsEnabled; // @synthesize donationsEnabled=_donationsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

