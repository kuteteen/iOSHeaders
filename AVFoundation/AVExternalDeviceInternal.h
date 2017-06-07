//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSData;
@protocol AVExternalDeviceDelegate, OS_dispatch_queue;

@interface AVExternalDeviceInternal : NSObject
{
    struct OpaqueFigEndpoint *_figEndpoint;
    id <AVExternalDeviceDelegate> _delegate;
    AVWeakReference *_weakReference;
    NSArray *_HIDs;
    long long _makeHIDsOnlyOnce;
    NSData *_MFiCertSerial;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_oemIcons;
    NSArray *_screenInfo;
    long long _makeIconsOnlyOnce;
}

@end

