//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <FuseUI/MusicJSRecentStationsManager-Protocol.h>

@class NSObject, RadioRecentStationsController;
@protocol OS_dispatch_queue;

@interface MusicJSRecentStationsManager : IKJSObject <MusicJSRecentStationsManager>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _hasRefreshedStations;
    RadioRecentStationsController *_recentStationsController;
}

@property(readonly, nonatomic) RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
- (void).cxx_destruct;
- (id)_dictionaryFromStationGroup:(id)arg1;
- (id)_dictionaryFromStation:(id)arg1;
- (void)_refreshIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_recentStationsControllerStationsDidChangeNotification:(id)arg1;
- (void)refreshRecentStations:(id)arg1:(id)arg2;
- (void)getRecentStations:(id)arg1:(id)arg2;
- (void)getRecentStationGroups:(id)arg1:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 recentStationsController:(id)arg2;
- (id)initWithAppContext:(id)arg1;

@end
