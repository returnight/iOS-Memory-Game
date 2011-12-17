//
//  NetworkGameController.h
//  MemoryGame
//
//  Created by Guest User on 11-12-16.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NetworkGameController : UIViewController <NSStreamDelegate>{

    NSInputStream *inputStream;
    NSOutputStream *outputStream;

}


@property (retain, nonatomic) IBOutletCollection(UIButton) NSArray *imageviews;
@property (retain) IBOutlet UINavigationBar *topToolbar;
@property (retain) IBOutlet UINavigationBar *bottomToolbar;
@property (retain) IBOutlet UILabel *pairsFoundCounter;
@property (retain) IBOutlet UILabel *turnsTakenCounter;
@property (retain) IBOutlet UILabel *pairsFoundText;
@property (retain) IBOutlet UILabel *turnsTakenText;
@property (retain) NSArray *cards;
@property (retain) NSMutableArray *assignments;
@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;

@property (assign) NSInteger flippedCards;
@property (assign) NSInteger lastCardIndex;
@property (assign) NSInteger currentCardIndex;
@property (assign) NSInteger pairsFound;



-(IBAction)cardClicked:(id)sender;
-(IBAction)quitGame:(id)sender;
-(IBAction)volumeToggle:(id)sender;

-(void)flipCardAtIndex:(int)index;
-(void)disableCards;
-(void)enableCards;
-(void)win;
-(void)lose;
-(void)setScoreWithPlayerScore:(NSString*)player andOpponentScore:(NSString*)opponent;
-(void)removeCardsAtIndex:(int)index1 andIndex:(int)index2;
-(void)flipCardsBackAtIndex:(int)index1 andIndex:(int)index2;
-(void)initNetworkCommunication;

@end