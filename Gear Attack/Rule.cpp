// include
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "Rule.h"

// 操作説明 初期化
Rule::Rule(const InitData& init) :IScene(init)
{
	mainImg = Texture(U"data/Rule/main.png");
	getData().firstPlayFlag = false;
}

// 操作説明 更新
void Rule::update()
{
	if (KeyG.pressed()) changeScene(U"Select");
}

// 操作説明 描画
void Rule::draw() const
{
	mainImg.drawAt(Scene::Center());
}
