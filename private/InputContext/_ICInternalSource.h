//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICPredictionSourcing-Protocol.h>

@interface _ICInternalSource : NSObject <_ICPredictionSourcing>
{
}

- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(CDUnknownBlockType)arg5;

@end
