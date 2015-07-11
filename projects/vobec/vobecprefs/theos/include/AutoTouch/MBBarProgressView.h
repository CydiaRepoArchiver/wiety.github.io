/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:28 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AutoTouch/AutoTouch-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MBBarProgressView : UIView {

	float _progress;
	UIColor* _lineColor;
	UIColor* _progressRemainingColor;
	UIColor* _progressColor;

}

@property (assign,nonatomic) float progress;                                //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                           //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * progressRemainingColor;              //@synthesize progressRemainingColor=_progressRemainingColor - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                       //@synthesize progressColor=_progressColor - In the implementation block
-(void)registerForKVO;
-(void)unregisterFromKVO;
-(id)observableKeypaths;
-(UIColor *)progressRemainingColor;
-(void)setProgressRemainingColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
@end

