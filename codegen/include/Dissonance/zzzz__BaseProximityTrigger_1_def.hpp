#pragma once
// IWYU pragma private; include "Dissonance/BaseProximityTrigger_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__BaseCommsTrigger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseProximityTrigger_1)
namespace Dissonance {
template<typename THandle>
class BaseProximityTrigger_1_Grid;
}
namespace Dissonance {
class IDissonancePlayer;
}
namespace Dissonance {
class VoicePlayerState;
}
namespace Dissonance {
class VoiceProximityBroadcastTrigger;
}
namespace Dissonance {
class VoiceProximityReceiptTrigger;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Dissonance {
template<typename THandle>
class BaseProximityTrigger_1;
}
namespace Dissonance {
template<typename THandle>
class BaseProximityTrigger_1_Grid;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::BaseProximityTrigger_1);
MARK_GEN_REF_T_PTR(::Dissonance::BaseProximityTrigger_1_Grid);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::BaseProximityTrigger_1, "Dissonance", "BaseProximityTrigger`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::BaseProximityTrigger_1_Grid, "Dissonance", "BaseProximityTrigger`1/Grid");
// Dependencies System.Object
namespace Dissonance {
// cpp template
template<typename THandle>
// Is value type: false
// CS Name: Dissonance.BaseProximityTrigger`1/Grid<THandle>
class CORDL_TYPE BaseProximityTrigger_1_Grid : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ChannelCount)) int32_t  ChannelCount;

 __declspec(property(get=get_Parent)) ::UnityW<THandle>  Parent;

/// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent_k__BackingField, put=__cordl_internal_set__Parent_k__BackingField)) ::UnityW<THandle>  _Parent_k__BackingField;

/// @brief Field _handles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handles, put=__cordl_internal_set__handles)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*  _handles;

/// @brief Field _keys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__keys, put=__cordl_internal_set__keys)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*  _keys;

/// @brief Field _nameBuilder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameBuilder, put=__cordl_internal_set__nameBuilder)) ::System::Text::StringBuilder*  _nameBuilder;

/// @brief Field _player, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__player, put=__cordl_internal_set__player)) ::Dissonance::IDissonancePlayer*  _player;

/// @brief Field _roomNameCache, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomNameCache, put=__cordl_internal_set__roomNameCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*  _roomNameCache;

/// @brief Method CellPos, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3Int CellPos(::UnityEngine::Vector3  pos) ;

/// @brief Method CloseAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CloseAll() ;

/// @brief Method CloseHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CloseHandle(THandle  handle) ;

/// @brief Method CreateHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline THandle CreateHandle(::UnityEngine::Vector3Int  id, ::StringW  name) ;

/// @brief Method DrawCube, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void DrawCube(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max, ::UnityEngine::Color  lines, ::UnityEngine::Color  fill) ;

/// @brief Method DrawGizmos, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DrawGizmos() ;

/// @brief Method GenerateName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::StringW GenerateName(::UnityEngine::Vector3Int  pos) ;

/// @brief Method InBound, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool InBound(::UnityEngine::Vector3Int  point, ::UnityEngine::BoundsInt  bounds) ;

static inline ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* New_ctor(::Dissonance::BaseProximityTrigger_1<THandle>*  parent) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update(::Dissonance::IDissonancePlayer*  player) ;

constexpr ::UnityW<THandle> const& __cordl_internal_get__Parent_k__BackingField() const;

constexpr ::UnityW<THandle>& __cordl_internal_get__Parent_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>* const& __cordl_internal_get__handles() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*& __cordl_internal_get__handles() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>* const& __cordl_internal_get__keys() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*& __cordl_internal_get__keys() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__nameBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__nameBuilder() ;

constexpr ::Dissonance::IDissonancePlayer* const& __cordl_internal_get__player() const;

constexpr ::Dissonance::IDissonancePlayer*& __cordl_internal_get__player() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>* const& __cordl_internal_get__roomNameCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*& __cordl_internal_get__roomNameCache() ;

constexpr void __cordl_internal_set__Parent_k__BackingField(::UnityW<THandle>  value) ;

constexpr void __cordl_internal_set__handles(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*  value) ;

constexpr void __cordl_internal_set__keys(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*  value) ;

constexpr void __cordl_internal_set__nameBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__player(::Dissonance::IDissonancePlayer*  value) ;

constexpr void __cordl_internal_set__roomNameCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::BaseProximityTrigger_1<THandle>*  parent) ;

/// @brief Method get_ChannelCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ChannelCount() ;

/// @brief Method get_Parent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<THandle> get_Parent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseProximityTrigger_1_Grid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseProximityTrigger_1_Grid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseProximityTrigger_1_Grid(BaseProximityTrigger_1_Grid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseProximityTrigger_1_Grid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseProximityTrigger_1_Grid(BaseProximityTrigger_1_Grid const& ) = delete;

/// @brief Field CacheSize offset 0xffffffff size 0x4
static constexpr int32_t  CacheSize{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16779};

/// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<THandle>  ____Parent_k__BackingField;

/// @brief Field _nameBuilder, offset: 0x18, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____nameBuilder;

/// @brief Field _handles, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3Int,THandle>>*  ____handles;

/// @brief Field _keys, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector3Int>*  ____keys;

/// @brief Field _player, offset: 0x30, size: 0x8, def value: None
 ::Dissonance::IDissonancePlayer*  ____player;

/// @brief Field _roomNameCache, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,::StringW>*  ____roomNameCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
// Dependencies Dissonance.BaseCommsTrigger
namespace Dissonance {
// cpp template
template<typename THandle>
// Is value type: false
// CS Name: Dissonance.BaseProximityTrigger`1<THandle>
class CORDL_TYPE BaseProximityTrigger_1 : public ::Dissonance::BaseCommsTrigger {
public:
// Declarations
using Grid = ::Dissonance::BaseProximityTrigger_1_Grid<THandle>;

 __declspec(property(get=get_ActiveChannelCount)) int32_t  ActiveChannelCount;

 __declspec(property(get=get_CanTrigger)) bool  CanTrigger;

 __declspec(property(get=get_Range, put=set_Range)) int32_t  Range;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_Size)) float_t  Size;

 __declspec(property(get=get_UseColliderTrigger, put=set_UseColliderTrigger)) bool  UseColliderTrigger;

/// @brief Field _grid, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__grid, put=__cordl_internal_set__grid)) ::Dissonance::BaseProximityTrigger_1_Grid<THandle>*  _grid;

/// @brief Field _range, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__range, put=__cordl_internal_set__range)) int32_t  _range;

/// @brief Field _roomName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomName, put=__cordl_internal_set__roomName)) ::StringW  _roomName;

/// @brief Field _self, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__self, put=__cordl_internal_set__self)) ::Dissonance::VoicePlayerState*  _self;

/// @brief Field _useTrigger, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTrigger, put=__cordl_internal_set__useTrigger)) bool  _useTrigger;

/// @brief Method AllowJoin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool AllowJoin(::UnityEngine::Vector3Int  id) ;

/// @brief Method AllowJoin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool AllowJoin(::Dissonance::VoicePlayerState*  player, ::UnityEngine::Vector3Int  id) ;

/// @brief Method CloseChannels, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CloseChannels() ;

/// @brief Method CreateGrid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* CreateGrid() ;

/// @brief Method GetCellBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetCellBounds(::UnityEngine::Vector3Int  id) ;

/// @brief Method IsUserActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsUserActivated() ;

static inline ::Dissonance::BaseProximityTrigger_1<THandle>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnValidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method <OnValidate>b__21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _OnValidate_b__21_0(::Dissonance::VoiceProximityBroadcastTrigger*  a) ;

/// @brief Method <OnValidate>b__21_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _OnValidate_b__21_1(::Dissonance::VoiceProximityReceiptTrigger*  a) ;

constexpr ::Dissonance::BaseProximityTrigger_1_Grid<THandle>* const& __cordl_internal_get__grid() const;

constexpr ::Dissonance::BaseProximityTrigger_1_Grid<THandle>*& __cordl_internal_get__grid() ;

constexpr int32_t const& __cordl_internal_get__range() const;

constexpr int32_t& __cordl_internal_get__range() ;

constexpr ::StringW const& __cordl_internal_get__roomName() const;

constexpr ::StringW& __cordl_internal_get__roomName() ;

constexpr ::Dissonance::VoicePlayerState* const& __cordl_internal_get__self() const;

constexpr ::Dissonance::VoicePlayerState*& __cordl_internal_get__self() ;

constexpr bool const& __cordl_internal_get__useTrigger() const;

constexpr bool& __cordl_internal_get__useTrigger() ;

constexpr void __cordl_internal_set__grid(::Dissonance::BaseProximityTrigger_1_Grid<THandle>*  value) ;

constexpr void __cordl_internal_set__range(int32_t  value) ;

constexpr void __cordl_internal_set__roomName(::StringW  value) ;

constexpr void __cordl_internal_set__self(::Dissonance::VoicePlayerState*  value) ;

constexpr void __cordl_internal_set__useTrigger(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveChannelCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ActiveChannelCount() ;

/// @brief Method get_CanTrigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanTrigger() ;

/// @brief Method get_Range, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Range() ;

/// @brief Method get_RoomName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_RoomName() ;

/// @brief Method get_Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Size() ;

/// @brief Method get_UseColliderTrigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_UseColliderTrigger() ;

/// @brief Method set_Range, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Range(int32_t  value) ;

/// @brief Method set_RoomName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_RoomName(::StringW  value) ;

/// @brief Method set_UseColliderTrigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_UseColliderTrigger(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseProximityTrigger_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseProximityTrigger_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseProximityTrigger_1(BaseProximityTrigger_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseProximityTrigger_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseProximityTrigger_1(BaseProximityTrigger_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16780};

/// @brief Field _range, offset: 0x50, size: 0x4, def value: None
 int32_t  ____range;

/// @brief Field _roomName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____roomName;

/// @brief Field _useTrigger, offset: 0x60, size: 0x1, def value: None
 bool  ____useTrigger;

/// @brief Field _self, offset: 0x68, size: 0x8, def value: None
 ::Dissonance::VoicePlayerState*  ____self;

/// @brief Field _grid, offset: 0x70, size: 0x8, def value: None
 ::Dissonance::BaseProximityTrigger_1_Grid<THandle>*  ____grid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
