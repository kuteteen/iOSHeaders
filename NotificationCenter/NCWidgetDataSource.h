//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCDataSource-Protocol.h>
#import <NotificationCenter/_NCDataSource-Protocol.h>

@class NSArray, NSString, _NCConcreteDataSource;

@interface NCWidgetDataSource : NSObject <_NCDataSource, NCDataSource>
{
    NSString *_dataSourceIdentifier;
    _NCConcreteDataSource *_concreteDataSource;
}

@property(retain, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _NCConcreteDataSource *concreteDataSource; // @synthesize concreteDataSource=_concreteDataSource;
@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)replaceWithDatum:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *widgetIdentifiers;
@property(readonly, nonatomic) NSString *parentDataSourceIdentifier;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

