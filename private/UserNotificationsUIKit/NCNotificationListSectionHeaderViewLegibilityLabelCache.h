//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NCNotificationListSectionHeaderViewLegibilityLabelCache : NSObject
{
    NSMutableDictionary *_sectionHeaderViewLegibilityLabelDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary; // @synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary;
- (void).cxx_destruct;
- (id)_stringDescriptorForFont:(id)arg1;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (id)legibilityLabelForTitle:(id)arg1 font:(id)arg2;
- (id)init;

@end

