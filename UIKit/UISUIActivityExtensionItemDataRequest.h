//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding>
{
    _Bool _wantsThumbnailItemData;
    _Bool _wantsAttachmentURLItemData;
    _Bool _isPhotoServiceAccessGranted;
    _Bool _isAirDropActivity;
    _Bool _activitySupportsPromiseURLs;
    Class _classForPreparingExtensionItemData;
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    NSDictionary *_activitySpecificMetadata;
    struct CGSize _thumbnailSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2;
@property(retain, nonatomic) NSDictionary *activitySpecificMetadata; // @synthesize activitySpecificMetadata=_activitySpecificMetadata;
@property(nonatomic) _Bool activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property(nonatomic) _Bool isAirDropActivity; // @synthesize isAirDropActivity=_isAirDropActivity;
@property(nonatomic) _Bool isPhotoServiceAccessGranted; // @synthesize isPhotoServiceAccessGranted=_isPhotoServiceAccessGranted;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) _Bool wantsAttachmentURLItemData; // @synthesize wantsAttachmentURLItemData=_wantsAttachmentURLItemData;
@property(nonatomic) _Bool wantsThumbnailItemData; // @synthesize wantsThumbnailItemData=_wantsThumbnailItemData;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(readonly, nonatomic) Class classForPreparingExtensionItemData; // @synthesize classForPreparingExtensionItemData=_classForPreparingExtensionItemData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithClassForPreparingExtensionItemData:(Class)arg1;

@end

