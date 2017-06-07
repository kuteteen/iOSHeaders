//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPHomeSharingRentalTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_saveRentals;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (id)_init;
- (id)init;

@end
