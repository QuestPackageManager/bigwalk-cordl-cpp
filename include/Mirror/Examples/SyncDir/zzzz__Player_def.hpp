#pragma once
// IWYU pragma private; include "Mirror/Examples/SyncDir/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename T>
class SyncList_1;
}
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace Mirror::Examples::SyncDir {
class Player;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::SyncDir::Player*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::SyncDir::Player*, "Mirror.Examples.SyncDir", "Player");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Color
namespace Mirror::Examples::SyncDir {
// Is value type: false
// CS Name: Mirror.Examples.SyncDir.Player
class CORDL_TYPE Player : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Networkhealth, put=set_Networkhealth)) int32_t  Networkhealth;

/// @brief Field health, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_health, put=__cordl_internal_set_health)) int32_t  health;

/// @brief Field list, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::Mirror::SyncList_1<int32_t>*  list;

/// @brief Field localColor, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_localColor, put=__cordl_internal_set_localColor)) ::UnityEngine::Color  localColor;

/// @brief Field textMesh, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_textMesh, put=__cordl_internal_set_textMesh)) ::UnityW<::UnityEngine::TextMesh>  textMesh;

/// @brief Method DeserializeSyncVars, addr 0x181560660, size 0x60, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::SyncDir::Player* New_ctor() ;

/// @brief Method OnGUI, addr 0x181560c80, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnStartLocalPlayer, addr 0x1815610b0, size 0x40, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method SerializeSyncVars, addr 0x181561820, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Update, addr 0x1815618d0, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_health() const;

constexpr int32_t& __cordl_internal_get_health() ;

constexpr ::Mirror::SyncList_1<int32_t>* const& __cordl_internal_get_list() const;

constexpr ::Mirror::SyncList_1<int32_t>*& __cordl_internal_get_list() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_localColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_localColor() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get_textMesh() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get_textMesh() ;

constexpr void __cordl_internal_set_health(int32_t  value) ;

constexpr void __cordl_internal_set_list(::Mirror::SyncList_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_localColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textMesh(::UnityW<::UnityEngine::TextMesh>  value) ;

/// @brief Method .ctor, addr 0x181561cc0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Networkhealth, addr 0x180371760, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Networkhealth() ;

/// @brief Method set_Networkhealth, addr 0x181562100, size 0x80, virtual false, abstract: false, final false
inline void set_Networkhealth(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19276};

/// @brief Field textMesh, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ___textMesh;

/// @brief Field localColor, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___localColor;

/// @brief Field health, offset: 0x80, size: 0x4, def value: None
 int32_t  ___health;

/// @brief Field list, offset: 0x88, size: 0x8, def value: None
 ::Mirror::SyncList_1<int32_t>*  ___list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::SyncDir::Player, ___textMesh) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SyncDir::Player, ___localColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SyncDir::Player, ___health) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SyncDir::Player, ___list) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::SyncDir::Player) == 0x90, "Size mismatch!");

} // namespace end def Mirror::Examples::SyncDir
