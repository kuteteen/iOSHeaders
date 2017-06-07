//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _MTLIndirectArgumentBufferLayout;
@protocol MTLDevice;

@interface _MTLIndirectArgumentEncoder : NSObject
{
    id <MTLDevice> _device;
    NSString *_label;
    _MTLIndirectArgumentBufferLayout *_layout;
}

@property(readonly, nonatomic) _MTLIndirectArgumentBufferLayout *layout; // @synthesize layout=_layout;
@property(copy) NSString *label; // @synthesize label=_label;
- (id)newIndirectArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 device:(id)arg2;
@property(readonly, nonatomic) id <MTLDevice> device;

@end

