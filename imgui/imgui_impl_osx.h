#pragma once
#include <Foundation/Foundation.h>
#include <UIKit/UIKit.h>
@interface ImGuiHelper : NSObject
- (id) initWithView: (UIView *)view;
- (void)connectServer: (NSString*)serverName;
- (void)render;
- (void)newFrame;
@end
