//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/UIBarPositioningDelegate-Protocol.h>

@class NSString, UISearchBar;

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional
- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (_Bool)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;
- (_Bool)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (_Bool)searchBarShouldBeginEditing:(UISearchBar *)arg1;
@end

