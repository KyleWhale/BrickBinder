

#import <Foundation/Foundation.h>

#if __has_include(<Masonry/Masonry.h>)
#import <Masonry/Masonry.h>
#else
#import "Masonry.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@import MediaPlayer;
@import AVFoundation;
@import UIKit;

typedef NS_ENUM(NSInteger, BrickBinderState) {
   BrickBinderStateFd,
   BrickBinderStateBfg,
   BrickBinderStateRTP,
   BrickBinderStatePg,
   BrickBinderStateSd,
   BrickBinderStateFsd
};

@class BrickBinder;
@protocol BrickBinderProtocol <NSObject>
@optional
- (void)brickBinder:(BrickBinder *)brickBinder cpopb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder ccb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder flsrn:(BOOL)flsrn ocsrb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder flsrn:(BOOL)flsrn ocsnb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder flsrn:(BOOL)flsrn ocstb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder atmtb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder lkbn:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder flsrn:(BOOL)flsrn occlnb:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder onbn:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder ontbn:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder ckfsbn:(UIButton *)button;
- (void)brickBinder:(BrickBinder *)brickBinder sgtpd:(UITapGestureRecognizer *)singleTap;
- (void)brickBinder:(BrickBinder *)brickBinder dbtpd:(UITapGestureRecognizer *)doubleTap;
- (void)brickBinderError:(BrickBinder *)brickBinder state:(BrickBinderState)state;
- (void)brickBinderRdy:(BrickBinder *)brickBinder state:(BrickBinderState)state;
- (void)brickBinderFsh:(BrickBinder *)brickBinder;
- (void)brickBinderTm:(BrickBinder *)brickBinder;
- (void)brickBinderTch;

@end


@interface BrickBinder : UIView

@property (nonatomic,retain,nullable) AVPlayer       *binder;
@property (nonatomic,retain,nullable) AVPlayerLayer  *binderLyr;
@property (nonatomic, weak)id <BrickBinderProtocol> delegate;
@property (nonatomic,retain ) UIView         *bottomView;
@property (nonatomic,retain ) CAGradientLayer * bottomLayer;
@property (nonatomic,retain ) CAGradientLayer * topLayer;
@property (nonatomic,retain ) UIView         *showView;
@property (nonatomic,retain ) UIButton       *lkbn;
@property (nonatomic,retain ) UIButton       *gbn;
@property (nonatomic,retain ) UIButton       *ptrggbn;
@property (nonatomic,retain ) UIButton       *swBinderBtn;
@property (nonatomic,retain ) UIButton       *advanceBtn;
@property (nonatomic,retain ) UIButton       *retreatBtn;
@property (nonatomic,retain ) UIButton       *nextBtn;
@property (nonatomic,retain ) UIView         *binderSView;
@property (nonatomic,strong) UIImageView        *showImageView;
@property (nonatomic,strong) UILabel        *showTimeLabel;
@property (nonatomic, assign) BOOL cdlk;
@property (nonatomic,retain ) UIView         *topView;
@property (nonatomic,strong) UILabel        *titleLabel;
@property (nonatomic, assign) BrickBinderState   state;
@property (nonatomic,assign ) BOOL            flsrn;
@property (nonatomic,retain ) UIButton       *flsbn;
@property (nonatomic,retain,nullable) UIButton       *popBtn;
@property (nonatomic,retain ) UIButton       *clsbn;
@property (nonatomic,retain ) UIButton      *shareBtn;
@property (nonatomic,retain ) UIButton      *clctbn;
@property (nonatomic,retain ) UIButton      *stlbn;
@property (nonatomic,retain ) UIButton      *screenButton;
@property (nonatomic,strong) UILabel        *loadFailedLabel;
@property (nonatomic, retain,nullable)   AVPlayerItem   *crtim;
@property (nonatomic,strong) UIActivityIndicatorView *loadingView;
@property (nonatomic,assign ) BOOL       isPlaying;
@property (nonatomic,copy) NSString       *usg;
@property (nonatomic, assign) double  stm;
@property (nonatomic,strong)  UIColor *prgskl;
@property (nonatomic, assign, readonly) NSInteger bfct;

- (void)binderPy;
- (void)binderPs;
- (double)cttm;
- (void)resetBinder;
- (void)showOrientation:(UIInterfaceOrientation )interfaceOrientation binder:(BrickBinder *)player superView:(UIView *)fatherView;
- (void)showPortrait:(BrickBinder *)player superView:(UIView *)fatherView withFrame:(CGRect )playerFrame;
- (void)closeBrickBinder:(UIButton *)sender;
- (void)flsBrickBinder:(UIButton *)sender;
- (void)reloadBrickBinder:(BOOL)flsrn;

@end

NS_ASSUME_NONNULL_END
