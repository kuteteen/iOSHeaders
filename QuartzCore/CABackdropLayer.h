//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;
@protocol CABackdropLayerDelegate><CALayerDelegate;

@interface CABackdropLayer : CALayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property double statisticsInterval;
@property(copy) NSString *statisticsType;
@property _Bool disablesOccludedBackdropBlurs;
@property _Bool allowsInPlaceFiltering;
@property _Bool captureOnly;
@property double marginWidth;
@property struct CGRect backdropRect;
@property double scale;
@property _Bool usesGlobalGroupNamespace;
@property(copy) NSString *groupName;
@property(getter=isEnabled) _Bool enabled;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (id)statisticsValues;
- (void)layerDidBecomeVisible:(_Bool)arg1;

// Remaining properties
@property __weak id <CABackdropLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end

