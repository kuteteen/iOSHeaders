//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PLManagedAlbum, UIViewController;
@protocol PUVideoTrimQueueControllerDelegate;

@interface PUVideoTrimQueueController : NSObject
{
    UIViewController *_displayingViewController;
    double _startTime;
    double _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    NSMutableDictionary *_trimmedVideoInfo;
    struct {
        unsigned int hasWillTrim:1;
        unsigned int hasDidTrim:1;
        unsigned int hasDidFinish:1;
        unsigned int hasDidCancel:1;
    } _delegateFlags;
    id <PUVideoTrimQueueControllerDelegate> _delegate;
    NSArray *_videosSources;
    NSDictionary *_videosSourcesSharingInfo;
    PLManagedAlbum *_album;
    NSString *_albumName;
    NSArray *_recipients;
    NSString *_commentText;
}

@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) PLManagedAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) NSDictionary *trimmedVideoInfo; // @synthesize trimmedVideoInfo=_trimmedVideoInfo;
@property(readonly, nonatomic) NSDictionary *videosSourcesSharingInfo; // @synthesize videosSourcesSharingInfo=_videosSourcesSharingInfo;
@property(readonly, nonatomic) NSArray *videosSources; // @synthesize videosSources=_videosSources;
@property(nonatomic) __weak id <PUVideoTrimQueueControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)_sendDidFinish;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (void)_dequeueTrimmingControl;
- (_Bool)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (void)start;
- (id)initWithViewController:(id)arg1 videoSources:(id)arg2 videoSourcesSharingInfo:(id)arg3 album:(id)arg4;

@end

