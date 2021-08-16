#pragma once
#include <unordered_map>
#include <string>

using std::unordered_map;
using std::string;

enum class EventCode {
	None,
	onConsoleInput,
	onConsoleOutput,
	onSelectForm,
	onUseItem,
	onPlaceBlock,
	onDestroyBlock,
	onOpenChest,
	onOpenBarrel,
	onCloseChest,
	onCloseBarrel,
	onContainerChange,
	onChangeDimension,
	onMobDie,
	onMobHurt,
	onRespawn,
	onChat,
	onInputText,
	onCommandBlockUpdate,
	onInputCommand,
	onCommandBlockPerform,
	onPlayerJoin,
	onPlayerLeft,
	onPlayerAttack,
	onLevelExplode,
	onSetArmor,
	onFallBlockTransform,
	onUseRespawnAnchorBlock,
	onScoreChanged,
	onMove,
	onPistonPush,
	onEndermanRandomTeleport,
};
//不推荐中文！
static const unordered_map<string, EventCode> events{
//{"后台输入",EventCode::onConsoleInput},
//{"后台输出",EventCode::onConsoleOutput},
//{"选择表单",EventCode::onSelectForm},
//{"使用物品",EventCode::onUseItem},
//{"放置方块",EventCode::onPlaceBlock},
//{"破坏方块",EventCode::onDestroyBlock},
//{"打开箱子",EventCode::onOpenChest},
//{"打开木桶",EventCode::onOpenBarrel},
//{"关闭箱子",EventCode::onCloseChest},
//{"关闭木桶",EventCode::onCloseBarrel},
//{"放入取出",EventCode::onContainerChange},
//{"切换维度",EventCode::onChangeDimension},
//{"生物死亡",EventCode::onMobDie},
//{"生物受伤",EventCode::onMobHurt},
//{"玩家重生",EventCode::onRespawn},
//{"聊天消息",EventCode::onChat},
//{"输入文本",EventCode::onInputText},
//{"更新命令方块",EventCode::onCommandBlockUpdate},
//{"输入指令",EventCode::onInputCommand},
//{"命令方块执行",EventCode::onCommandBlockPerform},
//{"加入游戏",EventCode::onPlayerJoin},
//{"离开游戏",EventCode::onPlayerLeft},
//{"玩家攻击",EventCode::onPlayerAttack},
//{"世界爆炸",EventCode::onLevelExplode},
//{"玩家穿戴",EventCode::onSetArmor},
//{"耕地破坏",EventCode::onFallBlockTransform},
//{"使用重生锚",EventCode::onUseRespawnAnchorBlock},
//{"计分板改变",EventCode::onScoreChanged},
//{"玩家移动",EventCode::onMove},
//{"活塞推动",EventCode::onPistonPush},
{"onConsoleInput",EventCode::onConsoleInput},
{"onConsoleOutput",EventCode::onConsoleOutput},
{"onSelectForm",EventCode::onSelectForm},
{"onUseItem",EventCode::onUseItem},
{"onPlaceBlock",EventCode::onPlaceBlock},
{"onDestroyBlock",EventCode::onDestroyBlock},
{"onOpenChest",EventCode::onOpenChest},
{"onOpenBarrel",EventCode::onOpenBarrel},
{"onCloseChest",EventCode::onCloseChest},
{"onCloseBarrel",EventCode::onCloseBarrel},
{"onContainerChange",EventCode::onContainerChange},
{"onChangeDimension",EventCode::onChangeDimension},
{"onMobDie",EventCode::onMobDie},
{"onMobHurt",EventCode::onMobHurt},
{"onRespawn",EventCode::onRespawn},
{"onChat",EventCode::onChat},
{"onInputText",EventCode::onInputText},
{"onCommandBlockUpdate",EventCode::onCommandBlockUpdate},
{"onInputCommand",EventCode::onInputCommand},
{"onCommandBlockPerform",EventCode::onCommandBlockPerform},
{"onPlayerJoin",EventCode::onPlayerJoin},
{"onPlayerLeft",EventCode::onPlayerLeft},
{"onPlayerAttack",EventCode::onPlayerAttack},
{"onLevelExplode",EventCode::onLevelExplode},
{"onSetArmor",EventCode::onSetArmor},
{"onFallBlockTransform",EventCode::onFallBlockTransform},
{"onUseRespawnAnchorBlock",EventCode::onUseRespawnAnchorBlock},
{"onScoreChanged",EventCode::onScoreChanged},
{"onMove",EventCode::onMove},
{"onPistonPush",EventCode::onPistonPush},
{"onEndermanRandomTeleport",EventCode::onEndermanRandomTeleport},
};
