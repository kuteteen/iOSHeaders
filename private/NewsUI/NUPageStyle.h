//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface NUPageStyle : NSObject
{
    _Bool _hideToolbar;
    NSString *_title;
    UIImage *_titleImage;
    NSString *_nextButtonTitle;
}

@property(nonatomic) _Bool hideToolbar; // @synthesize hideToolbar=_hideToolbar;
@property(copy, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

