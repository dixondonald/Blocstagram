//
//  ComposeCommentView.h
//  Blocstagram
//
//  Created by Ziggy on 3/3/16.
//  Copyright © 2016 Ziggy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ComposeCommentView;

@protocol ComposeCommentViewDelegate <NSObject>

- (void) commentViewDidPressCommentButton:(ComposeCommentView *)sender;
- (void) commentView:(ComposeCommentView *)sender textDidChange:(NSString *)text;
- (void) commentViewWillStartEditing:(ComposeCommentView *)sender;

@end

@interface ComposeCommentView : UIView

@property (nonatomic, weak) NSObject <ComposeCommentViewDelegate> *delegate;

@property (nonatomic, assign) BOOL isWritingComment;

@property (nonatomic, strong) NSString *text;

- (void) stopComposingComment;

@end
