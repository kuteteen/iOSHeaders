//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, PLPhotoEditRenderer;

@interface PUVideoEditRenderer : NSObject
{
    struct {
        _Bool respondsToStatusDidChange;
    } _delegateFlags;
    PLPhotoEditRenderer *_photoEditRenderer;
    NSURL *_outputURL;
    NSString *_exportPresetName;
    long long _status;
    id <PUVideoEditRendererDelegate> _delegate;
    CDUnknownBlockType __progressHandler;
    CDUnknownBlockType __completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler=__progressHandler;
@property(nonatomic) __weak id <PUVideoEditRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *exportPresetName; // @synthesize exportPresetName=_exportPresetName;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, copy, nonatomic) PLPhotoEditRenderer *photoEditRenderer; // @synthesize photoEditRenderer=_photoEditRenderer;
- (void).cxx_destruct;
- (void)_runCompletionHandlerWithError:(id)arg1;
- (void)_reportProgress;
- (void)_handleDidExport:(_Bool)arg1 error:(id)arg2;
- (void)cancelRendering;
- (void)render;
- (id)initWithPhotoEditRenderer:(id)arg1 outputURL:(id)arg2 exportPresetName:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end

