//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureInput, AVMetadataObject, NSString;

@interface AVMetadataObjectInternal : NSObject
{
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _bounds;
    NSString *_type;
    AVCaptureInput *_input;
    AVMetadataObject *_originalMetadataObject;
}

@property(retain) AVMetadataObject *originalMetadataObject; // @synthesize originalMetadataObject=_originalMetadataObject;
@property(retain) AVCaptureInput *input; // @synthesize input=_input;
@property(retain) NSString *type; // @synthesize type=_type;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)dealloc;
- (id)init;

@end

