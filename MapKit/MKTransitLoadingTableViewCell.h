//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIActivityIndicatorView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell
{
    _MKUILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

