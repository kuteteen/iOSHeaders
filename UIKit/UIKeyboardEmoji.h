//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UIKeyboardEmoji : NSObject
{
    NSString *_emojiString;
    unsigned long long _variantMask;
}

+ (id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;
@property unsigned long long variantMask; // @synthesize variantMask=_variantMask;
@property(retain, nonatomic) NSString *emojiString; // @synthesize emojiString=_emojiString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)key;
- (id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;

@end

