//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUQuickControlContentCharacteristicWritingDelegate.h"

@class HFItemManager, NSString, _HUQuickControlContentCharacteristicWriteQueuedUpdate;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate>
{
    id <HUQuickControlContentCharacteristicWritingDelegate> _forwardingCharacteristicWritingDelegate;
    HFItemManager *_itemManager;
    _HUQuickControlContentCharacteristicWriteQueuedUpdate *_queuedUpdate;
}

@property(retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate; // @synthesize queuedUpdate=_queuedUpdate;
@property(readonly, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate; // @synthesize forwardingCharacteristicWritingDelegate=_forwardingCharacteristicWritingDelegate;
- (void).cxx_destruct;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)arg1;
- (void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1;
- (void)_executeQueuedUpdate;
- (void)dealloc;
- (id)initWithItemManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

