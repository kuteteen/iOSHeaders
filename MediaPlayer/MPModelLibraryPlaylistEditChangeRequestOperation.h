//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryPlaylistEditChangeRequest;

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation
{
    MPModelLibraryPlaylistEditChangeRequest *_request;
    CDUnknownBlockType _localPersistenceResponseHandler;
    CDUnknownBlockType _completeResponseHandler;
}

+ (id)requiredPlaylistEntryProperties;
@property(copy, nonatomic) CDUnknownBlockType completeResponseHandler; // @synthesize completeResponseHandler=_completeResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType localPersistenceResponseHandler; // @synthesize localPersistenceResponseHandler=_localPersistenceResponseHandler;
@property(copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)_isCloudLibraryEnabled;
- (void)execute;

@end

