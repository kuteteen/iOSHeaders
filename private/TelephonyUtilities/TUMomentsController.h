//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUMomentsControllerDataSourceDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TUMomentsControllerDataSource, TUMomentsControllerDelegate;

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUMomentsControllerDataSource> _dataSource;
    id <TUMomentsControllerDelegate> _delegate;
    NSMutableDictionary *_capabilitiesByVideoStreamToken;
    NSMutableDictionary *_callByVideoStreamToken;
}

+ (_Bool)isFaceTimePhotosRestricted;
+ (void)setFaceTimePhotosEnabled:(_Bool)arg1;
+ (_Bool)isFaceTimePhotosEnabled;
+ (_Bool)isFaceTimePhotosEnabledByDefault;
@property(readonly, nonatomic) NSMutableDictionary *callByVideoStreamToken; // @synthesize callByVideoStreamToken=_callByVideoStreamToken;
@property(readonly, nonatomic) NSMutableDictionary *capabilitiesByVideoStreamToken; // @synthesize capabilitiesByVideoStreamToken=_capabilitiesByVideoStreamToken;
@property(readonly, nonatomic) __weak id <TUMomentsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TUMomentsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)serverDiedForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
- (void)willCaptureRemoteRequestForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
- (id)capabilitiesForCall:(id)arg1;
- (void)unregisterCall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerCall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endRequestWithTransactionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startRequestWithMediaType:(int)arg1 forCall:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

