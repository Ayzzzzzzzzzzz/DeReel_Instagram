#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface IGViewController: UIViewController
- (void)_superPresentViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(id)completion;
@end

@interface IGProfileMenuSheetViewController: IGViewController
@end

@interface IGTabBar: UIView
@end

@interface IGTableViewCell: UITableViewCell
- (id)initWithReuseIdentifier:(NSString *)identifier;
@end

@interface IGBaseView: UIView
@end

@interface IGCustomHeaderView: IGBaseView
@end

@interface IGProfileNavigationHeaderView: IGCustomHeaderView
@end

@interface IGListCollectionView: UICollectionView
@end

@interface _IGListScrollWhileAnimateCollectionView: IGListCollectionView
@end

@interface IGProfileSheetTableViewCell: IGTableViewCell
@end

@interface IGTallNavigationBarView: UIView
@end

@interface UIView (RCTViewUnmounting)
@property(retain, nonatomic) UIViewController *viewController;
- (UIView *)_rootView;
@end

@interface IGImageSpecifier : NSObject
@property(readonly, nonatomic) NSURL *url;
@end

@interface IGVideo : NSObject
@property(readonly, nonatomic) NSSet *allVideoURLs;
@end

@interface IGMedia : NSObject
@property(readonly) IGVideo *video;
@property long long likeCount;
@end

@interface IGPhoto: NSObject
@end

@interface IGPostItem: NSObject
@property(readonly) IGVideo *video;
@property(readonly) IGPhoto *photo;
@end

@interface IGPageMediaView: UIView
@property(readonly) NSMutableArray <IGPostItem *> *items;
- (IGPostItem *)currentMediaItem;
@end

@interface IGFeedItem : NSObject
@property long long likeCount;
@property(readonly) IGVideo *video;
- (BOOL)isSponsored;
- (BOOL)isSponsoredApp;
@end

@interface IGImageView : UIImageView
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier;
@end

@interface IGFeedItemPagePhotoCell: UICollectionViewCell
@property (nonatomic, strong) id post;
@end



