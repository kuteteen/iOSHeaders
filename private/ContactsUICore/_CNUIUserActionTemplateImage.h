//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIUserActionTemplateImage.h"

@class NSString;

@interface _CNUIUserActionTemplateImage : NSObject <CNUIUserActionTemplateImage>
{
    NSString *_imageName;
}

+ (id)resourceNameForImageName:(id)arg1 suffixIdentifier:(id)arg2;
+ (id)thirtyPercentAlphaWhiteIdentifier;
+ (id)systemMidGrayIdentifier;
+ (id)whiteIdentifier;
+ (id)systemBlueIdentifer;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)imageWithSuffixIdentifier:(id)arg1;
- (id)thirtyPercentAlphaWhiteImage;
- (id)systemMidGrayImage;
- (id)whiteImage;
- (id)systemBlueImage;
- (id)initWithImageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

