//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItemSection.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;

@interface HFMutableItemSection : HFItemSection
{
}

- (void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedFooterTitle; // @dynamic attributedFooterTitle;
@property(copy, nonatomic) NSString *footerTitle; // @dynamic footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @dynamic headerTitle;
@property(copy, nonatomic) NSArray *items; // @dynamic items;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

@end

