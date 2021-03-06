//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface KNRecordingEventTrack : TSPObject
{
    NSString *_type;
    NSArray *_events;
}

@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)p_slideNodeWasAddedToOrRemovedFromDocument;
- (void)slideNodeWillBeRemovedFromDocument:(id)arg1;
- (void)slideNodeWasAddedToDocument:(id)arg1;
- (id)eventTrackByReplacingSegmentAfterTime:(double)arg1 withEventTrack:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 type:(id)arg2 events:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct RecordingEventTrackArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct RecordingEventTrackArchive *)arg1 unarchiver:(id)arg2;

@end

