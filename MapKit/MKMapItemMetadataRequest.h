//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKMapItem, NSURL, NSURLRequest;

__attribute__((visibility("hidden")))
@interface MKMapItemMetadataRequest : NSObject
{
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLRequest *urlRequest;
@property(readonly, nonatomic) NSURL *url;
- (void)handleError:(id)arg1;
- (void)handleData:(id)arg1;

@end

