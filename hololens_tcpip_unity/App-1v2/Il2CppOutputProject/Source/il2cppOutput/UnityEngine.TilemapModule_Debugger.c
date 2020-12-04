#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 177, 0,  7 } /*tableIndex: 0 */,
	{ 178, 1,  9 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"tileData",
	"tileAnimationData",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[35] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x06000003 UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 1 } /* 0x06000014 UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 1, 1 } /* 0x06000016 UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[184] = 
{
	{ 13547, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 13547, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 13547, 1, 11, 11, 9, 28, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 13547, 1, 12, 12, 9, 10, 7, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 13547, 1, 13, 13, 9, 10, 8, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 13547, 1, 11, 11, 9, 28, 1, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 13548, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 13548, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 13548, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 13548, 1, 60, 60, 13, 45, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 13548, 1, 61, 61, 9, 10, 14, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 13548, 1, 60, 60, 13, 45, 8, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 13549, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 13549, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 13549, 1, 70, 70, 9, 10, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 13549, 1, 71, 71, 13, 41, 1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 13549, 1, 72, 72, 13, 31, 11, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 13549, 1, 73, 73, 9, 10, 19, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 13549, 1, 71, 71, 13, 41, 1, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 13550, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 13550, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 13550, 2, 15, 15, 36, 37, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 13550, 2, 15, 15, 38, 54, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 13550, 2, 15, 15, 55, 56, 10, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 13551, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 13551, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 13551, 2, 15, 15, 61, 62, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 13551, 2, 15, 15, 63, 80, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 13551, 2, 15, 15, 81, 82, 8, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 13552, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 13552, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 13552, 2, 16, 16, 34, 35, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 13552, 2, 16, 16, 36, 51, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 13552, 2, 16, 16, 52, 53, 10, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 13553, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 13553, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 13553, 2, 16, 16, 58, 59, 0, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 13553, 2, 16, 16, 60, 76, 1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 13553, 2, 16, 16, 77, 78, 8, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 13554, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 13554, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 13554, 2, 17, 17, 42, 43, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 13554, 2, 17, 17, 44, 63, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 13554, 2, 17, 17, 64, 65, 10, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 13555, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 13555, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 13555, 2, 17, 17, 70, 71, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 13555, 2, 17, 17, 72, 92, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 13555, 2, 17, 17, 93, 94, 8, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 13556, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 13556, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 13556, 2, 18, 18, 44, 45, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 13556, 2, 18, 18, 46, 75, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 13556, 2, 18, 18, 76, 77, 10, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 13557, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 13557, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 13557, 2, 18, 18, 82, 83, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 13557, 2, 18, 18, 84, 114, 1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 13557, 2, 18, 18, 115, 116, 8, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 13558, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 13558, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 13558, 2, 19, 19, 38, 39, 0, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 13558, 2, 19, 19, 40, 55, 1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 13558, 2, 19, 19, 56, 57, 10, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 13559, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 13559, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 13559, 2, 19, 19, 62, 63, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 13559, 2, 19, 19, 64, 80, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 13559, 2, 19, 19, 81, 82, 8, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 13560, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 13560, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 13560, 2, 20, 20, 48, 49, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 13560, 2, 20, 20, 50, 72, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 13560, 2, 20, 20, 73, 74, 10, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 13561, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 13561, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 13561, 2, 20, 20, 79, 80, 0, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 13561, 2, 20, 20, 81, 104, 1, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 13561, 2, 20, 20, 105, 106, 8, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 13562, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 13562, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 13562, 2, 36, 36, 9, 10, 0, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 13562, 2, 37, 37, 13, 40, 1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 13562, 2, 38, 38, 13, 38, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 13562, 2, 39, 39, 13, 46, 27, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 13562, 2, 40, 40, 13, 57, 40, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 13562, 2, 41, 41, 13, 38, 53, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 13562, 2, 42, 42, 13, 52, 66, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 13562, 2, 43, 43, 9, 10, 79, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 13562, 2, 37, 37, 13, 40, 8, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 13562, 2, 38, 38, 13, 38, 21, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 13562, 2, 39, 39, 13, 46, 34, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 13562, 2, 40, 40, 13, 57, 47, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 13562, 2, 41, 41, 13, 38, 60, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 13562, 2, 42, 42, 13, 52, 73, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 13563, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 13563, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 13563, 2, 25, 25, 9, 45, 0, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 13563, 2, 27, 27, 9, 60, 11, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 13563, 2, 31, 31, 9, 57, 22, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 13563, 2, 33, 33, 9, 67, 29, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 13563, 2, 25, 25, 9, 45, 1, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 13563, 2, 27, 27, 9, 60, 12, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 13563, 2, 33, 33, 9, 67, 37, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 13564, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 13564, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 13564, 3, 10, 10, 80, 81, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 13564, 3, 10, 10, 82, 112, 1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 13564, 3, 10, 10, 113, 114, 9, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 13564, 3, 10, 10, 82, 112, 3, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 13565, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 13565, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 13565, 3, 13, 13, 103, 104, 0, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 13565, 3, 13, 13, 104, 105, 1, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 13566, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 13566, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 13566, 3, 15, 15, 9, 10, 0, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 13566, 3, 16, 16, 13, 48, 1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 13566, 3, 17, 17, 13, 58, 9, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 13566, 3, 18, 18, 13, 29, 20, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 13566, 3, 19, 19, 9, 10, 24, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 13566, 3, 17, 17, 13, 58, 14, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 13567, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 13567, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 13567, 3, 22, 22, 130, 131, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 13567, 3, 22, 22, 132, 145, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 13567, 3, 22, 22, 146, 147, 5, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 13568, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 13568, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 13568, 3, 24, 24, 9, 10, 0, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 13568, 3, 25, 25, 13, 75, 1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 13568, 3, 26, 26, 13, 76, 9, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 13568, 3, 27, 27, 13, 38, 20, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 13568, 3, 28, 28, 9, 10, 24, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 13568, 3, 26, 26, 13, 76, 14, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 13569, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 13569, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 13569, 3, 31, 31, 91, 92, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 13569, 3, 31, 31, 93, 106, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 13569, 3, 31, 31, 107, 108, 5, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 13573, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 13573, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 13573, 4, 390, 390, 9, 10, 0, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 13573, 4, 391, 391, 13, 75, 1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 13573, 4, 392, 392, 9, 10, 19, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 13573, 4, 391, 391, 13, 75, 8, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 13573, 4, 391, 391, 13, 75, 13, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 13574, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 13574, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 13574, 4, 396, 396, 9, 10, 0, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 13574, 4, 397, 397, 13, 75, 1, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 13574, 4, 398, 398, 9, 10, 19, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 13574, 4, 397, 397, 13, 75, 8, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 13574, 4, 397, 397, 13, 75, 13, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 13576, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 13576, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 13576, 4, 408, 408, 61, 62, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 13576, 4, 408, 408, 63, 80, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 13576, 4, 408, 408, 81, 82, 8, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 13577, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 13577, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 13577, 4, 409, 409, 58, 59, 0, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 13577, 4, 409, 409, 60, 76, 1, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 13577, 4, 409, 409, 77, 78, 8, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 13578, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 13578, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 13578, 4, 410, 410, 70, 71, 0, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 13578, 4, 410, 410, 72, 92, 1, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 13578, 4, 410, 410, 93, 94, 8, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 13579, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 13579, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 13579, 4, 411, 411, 73, 74, 0, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 13579, 4, 411, 411, 75, 96, 1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 13579, 4, 411, 411, 97, 98, 8, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 13580, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 13580, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 13580, 4, 412, 412, 62, 63, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 13580, 4, 412, 412, 64, 80, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 13580, 4, 412, 412, 81, 82, 8, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 13581, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 13581, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 13581, 4, 413, 413, 84, 85, 0, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 13581, 4, 413, 413, 86, 109, 1, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 13581, 4, 413, 413, 110, 111, 8, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\ITilemap.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\Tile.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //2 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\TileBase.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //3 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\ScriptBindings\\Tilemap.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 2467, 1 },
	{ 2468, 2 },
	{ 2470, 3 },
	{ 2473, 4 },
	{ 2474, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 21 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 26 },
	{ 0, 7 },
	{ 0, 26 },
	{ 0, 7 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[35] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 21, 0, 1 } /* UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 12, 1, 1 } /* UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 12, 2, 1 } /* UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 12, 3, 1 } /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 12, 4, 1 } /* UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 12, 5, 1 } /* UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 12, 6, 1 } /* UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 26, 7, 1 } /* UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 8, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 26, 9, 1 } /* UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 10, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	184,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_TilemapModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
