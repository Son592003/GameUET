//
// Created by Administrator on 09/03/2024.
//

#ifndef PROJECT_NAME_MAINOBJECT_H
#define PROJECT_NAME_MAINOBJECT_H
#include "CommonFunc.h"
#include "BaseObject.h"

#define GRAVITY_SPEED 0.8
#define MAX_FALL_SPEED 10
#define PLAYER_SPEED 0.5
class MainObject : public BaseObject{
public:
    MainObject();
    ~MainObject();

    enum WalkType{
        WALK_RIGHT = 0,
        WALK_LEFT = 1,
    };
    bool LoadImg ( std::string path, SDL_Renderer* screen);
    void Show(SDL_Renderer *des);
    void HandelIputAction(SDL_Event events, SDL_Renderer *screen);
    void set_clip();

    void DoPlayer(Map &map_data);
    void CheckToMap (Map &map_data);
private:
    float x_val_;
    float y_val_;

    float x_pos_;
    float y_pos_;

    int width_frame_;
    int height_frame_;

    SDL_Rect frame_clip_[8];
    Input input_type_;
    int frame_;
    int status_;
    bool on_ground_;
};

#endif //PROJECT_NAME_MAINOBJECT_H
