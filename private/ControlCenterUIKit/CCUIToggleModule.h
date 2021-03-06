//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCUIContentModule.h"

@class CCUICAPackageDescription, CCUIContentModuleContext, CCUIToggleViewController, NSString, UIColor, UIImage, UIViewController, UIViewController<CCUIContentModuleContentViewController>;

@interface CCUIToggleModule : NSObject <CCUIContentModule>
{
    CCUIToggleViewController *_viewController;
    CCUIContentModuleContext *_contentModuleContext;
    CCUICAPackageDescription *_glyphPackageDescription;
}

@property(readonly, copy, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
- (void)reconfigureView;
- (void)refreshState;
@property(readonly, copy, nonatomic) NSString *glyphState;
- (id)glyphPackage;
@property(readonly, copy, nonatomic) UIColor *selectedColor; // @dynamic selectedColor;
@property(readonly, copy, nonatomic) UIImage *selectedIconGlyph; // @dynamic selectedIconGlyph;
@property(readonly, copy, nonatomic) UIImage *iconGlyph; // @dynamic iconGlyph;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;

// Remaining properties
@property(readonly, nonatomic) UIViewController *backgroundViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

