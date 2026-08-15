#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileMusicConnector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PegTileMusicConnector)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
class MusicPlayer;
}
namespace GlobalNamespace {
class PegTileMusicConnector___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class PegTileMusicSet;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class PegTileMusicConnector;
}
namespace GlobalNamespace {
class PegTileMusicConnector___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PegTileMusicConnector*);
MARK_REF_T(::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileMusicConnector*, "", "PegTileMusicConnector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0*, "", "PegTileMusicConnector/<>c__DisplayClass10_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileMusicConnector/<>c__DisplayClass10_0
class CORDL_TYPE PegTileMusicConnector___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PegTileMusicConnector>  __4__this;

/// @brief Field musicGroup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroup, put=__cordl_internal_set_musicGroup)) ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

static inline ::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <SetPegTile>b__0, addr 0x180409100, size 0x50, virtual false, abstract: false, final false
inline void _SetPegTile_b__0(double_t  _) ;

constexpr ::UnityW<::GlobalNamespace::PegTileMusicConnector> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PegTileMusicConnector>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get_musicGroup() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get_musicGroup() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PegTileMusicConnector>  value) ;

constexpr void __cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileMusicConnector___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicConnector___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileMusicConnector___c__DisplayClass10_0(PegTileMusicConnector___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicConnector___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileMusicConnector___c__DisplayClass10_0(PegTileMusicConnector___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5088};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileMusicConnector>  _____4__this;

/// @brief Field musicGroup, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ___musicGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0, ___musicGroup) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PropGroup, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PegTileMusicConnector
class CORDL_TYPE PegTileMusicConnector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass10_0 = ::GlobalNamespace::PegTileMusicConnector___c__DisplayClass10_0;

/// @brief Field _playing, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Field indicatorEmission, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_indicatorEmission, put=__cordl_internal_set_indicatorEmission)) float_t  indicatorEmission;

/// @brief Field logVerbose, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field musicPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicPlayer, put=__cordl_internal_set_musicPlayer)) ::UnityW<::GlobalNamespace::MusicPlayer>  musicPlayer;

/// @brief Field offSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_offSound, put=__cordl_internal_set_offSound)) ::UnityW<::GlobalNamespace::AudioAsset>  offSound;

/// @brief Field onSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSound, put=__cordl_internal_set_onSound)) ::UnityW<::GlobalNamespace::AudioAsset>  onSound;

/// @brief Field pegTileMusicSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileMusicSet, put=__cordl_internal_set_pegTileMusicSet)) ::UnityW<::GlobalNamespace::PegTileMusicSet>  pegTileMusicSet;

/// @brief Field propGroup, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_propGroup, put=__cordl_internal_set_propGroup)) ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field propertyBlockHelper, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field scrambleSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrambleSound, put=__cordl_internal_set_scrambleSound)) ::UnityW<::GlobalNamespace::AudioAsset>  scrambleSound;

static inline ::GlobalNamespace::PegTileMusicConnector* New_ctor() ;

/// @brief Method SetIndicatorEmission, addr 0x1804060c0, size 0x80, virtual false, abstract: false, final false
inline void SetIndicatorEmission(bool  value) ;

/// @brief Method SetPegTile, addr 0x180406140, size 0x440, virtual false, abstract: false, final false
inline void SetPegTile(::GlobalNamespace::PropGroup  newPropGroup) ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr float_t const& __cordl_internal_get_indicatorEmission() const;

constexpr float_t& __cordl_internal_get_indicatorEmission() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::MusicPlayer> const& __cordl_internal_get_musicPlayer() const;

constexpr ::UnityW<::GlobalNamespace::MusicPlayer>& __cordl_internal_get_musicPlayer() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_offSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_offSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_onSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_onSound() ;

constexpr ::UnityW<::GlobalNamespace::PegTileMusicSet> const& __cordl_internal_get_pegTileMusicSet() const;

constexpr ::UnityW<::GlobalNamespace::PegTileMusicSet>& __cordl_internal_get_pegTileMusicSet() ;

constexpr ::GlobalNamespace::PropGroup const& __cordl_internal_get_propGroup() const;

constexpr ::GlobalNamespace::PropGroup& __cordl_internal_get_propGroup() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_scrambleSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_scrambleSound() ;

constexpr void __cordl_internal_set__playing(bool  value) ;

constexpr void __cordl_internal_set_indicatorEmission(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_musicPlayer(::UnityW<::GlobalNamespace::MusicPlayer>  value) ;

constexpr void __cordl_internal_set_offSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_onSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_pegTileMusicSet(::UnityW<::GlobalNamespace::PegTileMusicSet>  value) ;

constexpr void __cordl_internal_set_propGroup(::GlobalNamespace::PropGroup  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_scrambleSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PegTileMusicConnector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicConnector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PegTileMusicConnector(PegTileMusicConnector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PegTileMusicConnector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PegTileMusicConnector(PegTileMusicConnector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5089};

/// @brief Field musicPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicPlayer>  ___musicPlayer;

/// @brief Field pegTileMusicSet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileMusicSet>  ___pegTileMusicSet;

/// @brief Field propGroup, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  ___propGroup;

/// @brief Field propertyBlockHelper, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field indicatorEmission, offset: 0x40, size: 0x4, def value: None
 float_t  ___indicatorEmission;

/// @brief Field onSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___onSound;

/// @brief Field offSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___offSound;

/// @brief Field scrambleSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___scrambleSound;

/// @brief Field logVerbose, offset: 0x60, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _playing, offset: 0x61, size: 0x1, def value: None
 bool  ____playing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___musicPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___pegTileMusicSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___propGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___propertyBlockHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___indicatorEmission) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___onSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___offSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___scrambleSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ___logVerbose) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PegTileMusicConnector, ____playing) == 0x61, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PegTileMusicConnector) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
