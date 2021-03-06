//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface IXGlobalConfiguration : NSObject
{
    unsigned int _uid;
    unsigned int _gid;
    NSURL *_mobileHome;
    NSURL *_rootPath;
    NSURL *_systemContainerPath;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSURL *systemContainerPath; // @synthesize systemContainerPath=_systemContainerPath;
@property(readonly, nonatomic) NSURL *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) NSURL *mobileHome; // @synthesize mobileHome=_mobileHome;
@property(readonly, nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *userVolumeURL;
@property(readonly, nonatomic) NSURL *frameworkURL;
@property(readonly, nonatomic) NSURL *promiseStagingRootDirectory;
@property(readonly, nonatomic) NSURL *oldSupportDirectory;
@property(readonly, nonatomic) NSURL *dataDirectory;
- (void)createDirectories;
- (id)init;

@end

