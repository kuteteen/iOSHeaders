//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIContentModuleContext, CCUIStatusUpdate;

@protocol CCUIContentModuleContextDelegate <NSObject>
- (void)dismissControlCenterForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)dismissExpandedViewForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)requestExpandModuleForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 enqueueStatusUpdate:(CCUIStatusUpdate *)arg2;
@end

