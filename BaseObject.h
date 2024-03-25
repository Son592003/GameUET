//
// Created by Administrator on 01/03/2024.
//

#ifndef PROJECT_NAME_BASEOBJECT_H
#define PROJECT_NAME_BASEOBJECT_H
#include "CommonFunc.h"
class BaseObject{
public:
    BaseObject();
    void SetRect(const int& x, const int &y){
        rect_.x = x, rect_.y =y;
    }
    SDL_Rect GetRect() const {return rect_;}
    SDL_Texture *GetObject() const {return  p_objcet_;}
    virtual bool LoadImg(std::string path, SDL_Renderer *screen);
    void Render(SDL_Renderer *des, const SDL_Rect *clip = NULL);
protected:
    SDL_Texture* p_objcet_;
    SDL_Rect rect_;
};
#endif //PROJECT_NAME_BASEOBJECT_H
