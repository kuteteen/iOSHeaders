//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject
{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    NSDictionary *_standardResults;
}

@property(readonly, nonatomic) NSDictionary *standardResults; // @synthesize standardResults=_standardResults;
@property(readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // @synthesize displayMetadata=_displayMetadata;
- (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2;

@end

