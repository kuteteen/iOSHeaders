//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface UIIndexBarEntry : NSObject
{
    NSString *_title;
    NSString *_shortTitle;
    long long _type;
    UIImage *_image;
    NSIndexPath *_indexPath;
}

+ (id)_externalDotImageInView:(id)arg1;
+ (id)_dotImageInView:(id)arg1;
+ (id)entryForDotInView:(id)arg1;
+ (id)entryForSearch;
+ (id)entryForNumbers;
+ (id)entryWithTitle:(id)arg1;
+ (id)entryWithType:(long long)arg1;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *effectiveShortTitle;
- (id)description;

@end

