#import "InstagramHeaders.h"
#import <substrate.h>



%hook _IGListScrollWhileAnimateCollectionView
- (void)_didModifySections:(id)arg1 {
        for (UIView *subview in self.subviews) {
            if ([subview respondsToSelector:@selector(accessibilityLabel)] && [[subview accessibilityLabel] isEqualToString:@"Suggested reels"]) {
                [subview setHidden:YES];
            }
        }
    }
%end


%hook IGExploreGridViewController
- (id)view {
        return nil;
}
%end


%hook IGTabBar
- (void)didMoveToWindow {
    %orig;
        NSMutableArray *tabButtons = [self valueForKey:@"_tabButtons"];
        if ([tabButtons count] == 5) {
            [tabButtons removeObjectAtIndex:3];
        }

        [self.subviews[4] setHidden:YES];
    
}
%end
