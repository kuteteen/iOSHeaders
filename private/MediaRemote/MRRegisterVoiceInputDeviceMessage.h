//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage
{
    MRVirtualVoiceInputDeviceDescriptor *_descriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
- (unsigned long long)type;
- (id)initWithDescriptor:(id)arg1;

@end

