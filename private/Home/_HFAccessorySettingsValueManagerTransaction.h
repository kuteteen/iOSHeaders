//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessorySetting, NAFuture, NSNumber;

@interface _HFAccessorySettingsValueManagerTransaction : NSObject
{
    NAFuture *_writeFuture;
    id _value;
    HMAccessorySetting *_setting;
    NSNumber *_transactionNumber;
}

@property(retain, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(retain, nonatomic) HMAccessorySetting *setting; // @synthesize setting=_setting;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NAFuture *writeFuture; // @synthesize writeFuture=_writeFuture;
- (void).cxx_destruct;
- (id)init;

@end
