//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, _INPBPriceRangeValue;

@protocol INPriceRangeExport <NSObject, JSExport>
+ (id)_priceWithPriceRangeValue:(_INPBPriceRangeValue *)arg1;
@property(retain, nonatomic) NSString *currencyCode;
@property(retain, nonatomic) NSDecimalNumber *maximumPrice;
@property(retain, nonatomic) NSDecimalNumber *minimumPrice;
- (id)init;
@end

