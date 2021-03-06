//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface DOCThumbnailFolderIcon : NSObject
{
    UIImage *_image;
    NSString *_imageName;
    UIImage *_documentsBadge;
    UIImage *_desktopBadge;
    double _dimension;
    double _bottomInset;
    struct CGSize _badgeSize;
}

+ (id)folderIconForSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3;
+ (id)darkFolderIcons;
+ (id)lightFolderIcons;
@property(readonly, nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(readonly, nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(readonly, nonatomic) UIImage *desktopBadge; // @synthesize desktopBadge=_desktopBadge;
@property(readonly, nonatomic) UIImage *documentsBadge; // @synthesize documentsBadge=_documentsBadge;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)badgeForFolderType:(unsigned long long)arg1;
- (void)resolveImage;
- (id)initWithImageName:(id)arg1 documentsBadgeName:(id)arg2 dekstopBadgeName:(id)arg3 badgeDimension:(double)arg4 badgeBottomInset:(double)arg5;

@end

