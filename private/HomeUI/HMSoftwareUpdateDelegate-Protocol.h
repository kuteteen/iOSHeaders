//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMSoftwareUpdate, HMSoftwareUpdateDocumentation;

@protocol HMSoftwareUpdateDelegate <NSObject>

@optional
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentation:(HMSoftwareUpdateDocumentation *)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentationAvailable:(_Bool)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateState:(long long)arg2;
@end

