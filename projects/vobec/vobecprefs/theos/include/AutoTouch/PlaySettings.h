/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 28, 2014 at 4:16:25 PM Central European Standard Time
* Operating System: Version 7.1.2 (Build 11D257)
* Image Source: /private/var/mobile/Downloads/AutoTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PlaySettings : NSObject {

	char _playDirectly;
	NSString* _scriptTitle;
	int _repeatTime;
	int _repeatInterval;
	float _playSpeed;
	NSString* _scriptPath;
	NSString* _scriptContent;
	int _playType;
	int _playNowOrLater;

}

@property (nonatomic,retain) NSString * scriptTitle;                //@synthesize scriptTitle=_scriptTitle - In the implementation block
@property (assign,nonatomic) char playDirectly;                     //@synthesize playDirectly=_playDirectly - In the implementation block
@property (assign,nonatomic) int repeatTime;                        //@synthesize repeatTime=_repeatTime - In the implementation block
@property (assign,nonatomic) int repeatInterval;                    //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (assign,nonatomic) float playSpeed;                       //@synthesize playSpeed=_playSpeed - In the implementation block
@property (nonatomic,retain) NSString * scriptPath;                 //@synthesize scriptPath=_scriptPath - In the implementation block
@property (nonatomic,retain) NSString * scriptContent;              //@synthesize scriptContent=_scriptContent - In the implementation block
@property (assign,nonatomic) int playType;                          //@synthesize playType=_playType - In the implementation block
@property (assign,nonatomic) int playNowOrLater;                    //@synthesize playNowOrLater=_playNowOrLater - In the implementation block
-(NSString *)scriptTitle;
-(char)playDirectly;
-(int)repeatTime;
-(float)playSpeed;
-(void)setPlayDirectly:(char)arg1 ;
-(void)setRepeatTime:(int)arg1 ;
-(void)setPlaySpeed:(float)arg1 ;
-(void)setScriptTitle:(NSString *)arg1 ;
-(void)setScriptPath:(NSString *)arg1 ;
-(NSString *)scriptContent;
-(void)setScriptContent:(NSString *)arg1 ;
-(int)playType;
-(void)setPlayType:(int)arg1 ;
-(int)playNowOrLater;
-(void)setPlayNowOrLater:(int)arg1 ;
-(id)init;
-(void)setRepeatInterval:(int)arg1 ;
-(int)repeatInterval;
-(NSString *)scriptPath;
@end

