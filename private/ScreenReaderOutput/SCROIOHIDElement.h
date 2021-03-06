//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROIOElement.h>

#import "SCROIOBluetoothElementProtocol.h"
#import "SCROIOHIDElementProtocol.h"

@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol>
{
    struct __IOHIDDevice *_hidDevice;
}

- (id)bluetoothAddress;
- (int)transport;
- (struct __IOHIDDevice *)hidDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIOObject:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

