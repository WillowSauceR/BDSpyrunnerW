#pragma once
#include <unordered_map>
#include <string>

enum class EventCode {
	None,
	onTest,
	onConsoleInput,
	onConsoleOutput,
	onSelectForm,
	onUseItem,
	onUseItemEx,
	onPlaceBlock,
	onPlacedBlock,
	onDestroyBlock,
	onDestroyedBlock,
	onOpenChest,
	onOpenBarrel,
	onCloseChest,
	onCloseBarrel,
	onContainerChange,
	onPlayerInventoryChange,
	onChangeDimension,
	onMobDie,
	onMobHurt,
	onRespawn,
	onChat,
	onInputText,
	onCommandBlockUpdate,
	onInputCommand,
	onCommandBlockPerform,
	onPreJoin,
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
	onServerStarted,
	onDropItem,
	onTakeItem,
	onRide,
	onUseFrameBlock,
	onJump,
	onSneak,
	onBlockInteracted,
	onFireSpread,
	onBlockExploded,
	onUseSignBlock,
	onLiquidSpread,
	onChatPkt,
	onTick,
};

inline const std::unordered_map<std::string, EventCode> events{
	{ "onTest", EventCode::onTest },
	{ "onConsoleInput", EventCode::onConsoleInput },
	{ "onConsoleOutput", EventCode::onConsoleOutput },
	{ "onSelectForm", EventCode::onSelectForm },
	{ "onUseItem", EventCode::onUseItem },
	{ "onUseItemEx", EventCode::onUseItemEx },
	{ "onPlaceBlock", EventCode::onPlaceBlock },
	{ "onPlacedBlock", EventCode::onPlacedBlock },
	{ "onDestroyBlock", EventCode::onDestroyBlock },
	{ "onDestroyedBlock", EventCode::onDestroyedBlock },
	{ "onOpenChest", EventCode::onOpenChest },
	{ "onOpenBarrel", EventCode::onOpenBarrel },
	{ "onCloseChest", EventCode::onCloseChest },
	{ "onCloseBarrel", EventCode::onCloseBarrel },
	{ "onContainerChange", EventCode::onContainerChange },
	{ "onPlayerInventoryChange", EventCode::onPlayerInventoryChange },
	{ "onChangeDimension", EventCode::onChangeDimension },
	{ "onMobDie", EventCode::onMobDie },
	{ "onMobHurt", EventCode::onMobHurt },
	{ "onRespawn", EventCode::onRespawn },
	{ "onChat", EventCode::onChat },
	{ "onInputText", EventCode::onInputText },
	{ "onCommandBlockUpdate", EventCode::onCommandBlockUpdate },
	{ "onInputCommand", EventCode::onInputCommand },
	{ "onCommandBlockPerform", EventCode::onCommandBlockPerform },
	{ "onPreJoin", EventCode::onPreJoin },
	{ "onPlayerJoin", EventCode::onPlayerJoin },
	{ "onPlayerLeft", EventCode::onPlayerLeft },
	{ "onPlayerAttack", EventCode::onPlayerAttack },
	{ "onLevelExplode", EventCode::onLevelExplode },
	{ "onSetArmor", EventCode::onSetArmor },
	{ "onFallBlockTransform", EventCode::onFallBlockTransform },
	{ "onUseRespawnAnchorBlock", EventCode::onUseRespawnAnchorBlock },
	{ "onScoreChanged", EventCode::onScoreChanged },
	{ "onMove", EventCode::onMove },
	{ "onPistonPush", EventCode::onPistonPush },
	{ "onEndermanRandomTeleport", EventCode::onEndermanRandomTeleport },
	{ "onServerStarted", EventCode::onServerStarted },
	{ "onDropItem", EventCode::onDropItem },
	{ "onTakeItem", EventCode::onTakeItem },
	{ "onRide", EventCode::onRide },
	{ "onUseFrameBlock", EventCode::onUseFrameBlock },
	{ "onJump", EventCode::onJump },
	{ "onSneak", EventCode::onSneak },
	{ "onBlockInteracted", EventCode::onBlockInteracted },
	{ "onFireSpread", EventCode::onFireSpread },
	{ "onBlockExploded", EventCode::onBlockExploded },
	{ "onUseSignBlock", EventCode::onUseSignBlock },
	{ "onLiquidSpread", EventCode::onLiquidSpread },
	{ "onChatPkt", EventCode::onChatPkt },
	{ "onTick", EventCode::onTick },
};
