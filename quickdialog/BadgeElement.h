//
//  Created by escoz on 7/13/11.
//
//  To change this template use File | Settings | File Templates.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class LabelElement;
@class RootElement;


@interface BadgeElement : LabelElement {

@private
    UIColor *_badgeColor;
    NSString *_badge;
}

@property(nonatomic, retain) UIColor *badgeColor;
@property(nonatomic, strong) NSString *badge;


- (BadgeElement *)initWithTitle:(NSString *)title Value:(NSString *)value;
@end