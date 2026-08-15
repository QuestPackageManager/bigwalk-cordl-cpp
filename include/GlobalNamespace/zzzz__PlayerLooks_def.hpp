#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLooks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLooks)
namespace GlobalNamespace {
class LimbSpline;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace GlobalNamespace {
struct PlayerLooks_LookPart;
}
namespace GlobalNamespace {
struct PlayerLooks_LookType;
}
namespace GlobalNamespace {
class PlayerLooks_LooksRenderer;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class PropertyBlockHelper;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerLooks_LookPart;
}
namespace GlobalNamespace {
struct PlayerLooks_LookType;
}
namespace GlobalNamespace {
class PlayerLooks;
}
namespace GlobalNamespace {
class PlayerLooks_LooksRenderer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerLooks_LookPart);
MARK_VAL_T(::GlobalNamespace::PlayerLooks_LookType);
MARK_REF_T(::GlobalNamespace::PlayerLooks*);
MARK_REF_T(::GlobalNamespace::PlayerLooks_LooksRenderer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLooks_LookPart, "", "PlayerLooks/LookPart");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLooks_LookType, "", "PlayerLooks/LookType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLooks*, "", "PlayerLooks");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLooks_LooksRenderer*, "", "PlayerLooks/LooksRenderer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerLooks/LookType
struct CORDL_TYPE PlayerLooks_LookType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerLooks_LookType_Unwrapped
enum struct __PlayerLooks_LookType_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_Remote = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerLooks_LookType_Unwrapped () const noexcept {
return static_cast<__PlayerLooks_LookType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLooks_LookType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLooks_LookType(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::GlobalNamespace::PlayerLooks_LookType const Local;

/// @brief Field Remote value: I32(1)
static ::GlobalNamespace::PlayerLooks_LookType const Remote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLooks_LookType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLooks_LookType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerLooks/LookPart
struct CORDL_TYPE PlayerLooks_LookPart {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerLooks_LookPart_Unwrapped
enum struct __PlayerLooks_LookPart_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Torso = static_cast<int32_t>(0x1),
__E_Legs = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerLooks_LookPart_Unwrapped () const noexcept {
return static_cast<__PlayerLooks_LookPart_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLooks_LookPart() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLooks_LookPart(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::PlayerLooks_LookPart const Head;

/// @brief Field Legs value: I32(2)
static ::GlobalNamespace::PlayerLooks_LookPart const Legs;

/// @brief Field Torso value: I32(1)
static ::GlobalNamespace::PlayerLooks_LookPart const Torso;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLooks_LookPart, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLooks_LookPart) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLooks/LooksRenderer
class CORDL_TYPE PlayerLooks_LooksRenderer : public ::System::Object {
public:
// Declarations
/// @brief Field _fallbackPropertyBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallbackPropertyBlock, put=__cordl_internal_set__fallbackPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _fallbackPropertyBlock;

/// @brief Field _materialInstanceForSimpleRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstanceForSimpleRenderer, put=__cordl_internal_set__materialInstanceForSimpleRenderer)) ::UnityW<::UnityEngine::Material>  _materialInstanceForSimpleRenderer;

/// @brief Field limbSpline, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_limbSpline, put=__cordl_internal_set_limbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  limbSpline;

/// @brief Field local, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_local, put=__cordl_internal_set_local)) bool  local;

/// @brief Field propertyBlockHelper, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlockHelper, put=__cordl_internal_set_propertyBlockHelper)) ::UnityW<::GlobalNamespace::PropertyBlockHelper>  propertyBlockHelper;

/// @brief Field remote, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_remote, put=__cordl_internal_set_remote)) bool  remote;

/// @brief Field renderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Method Clean, addr 0x180347b40, size 0x30, virtual false, abstract: false, final false
inline void Clean() ;

/// @brief Method GetMaterial, addr 0x180347b70, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial() ;

static inline ::GlobalNamespace::PlayerLooks_LooksRenderer* New_ctor() ;

/// @brief Method SetLocal, addr 0x180347c10, size 0x90, virtual false, abstract: false, final false
inline void SetLocal(bool  localRendererIsHidden) ;

/// @brief Method SetRemote, addr 0x180347ca0, size 0xb0, virtual false, abstract: false, final false
inline void SetRemote() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__fallbackPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__fallbackPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstanceForSimpleRenderer() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstanceForSimpleRenderer() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_limbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_limbSpline() ;

constexpr bool const& __cordl_internal_get_local() const;

constexpr bool& __cordl_internal_get_local() ;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper> const& __cordl_internal_get_propertyBlockHelper() const;

constexpr ::UnityW<::GlobalNamespace::PropertyBlockHelper>& __cordl_internal_get_propertyBlockHelper() ;

constexpr bool const& __cordl_internal_get_remote() const;

constexpr bool& __cordl_internal_get_remote() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_renderer() ;

constexpr void __cordl_internal_set__fallbackPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__materialInstanceForSimpleRenderer(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_limbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_local(bool  value) ;

constexpr void __cordl_internal_set_propertyBlockHelper(::UnityW<::GlobalNamespace::PropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_remote(bool  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLooks_LooksRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLooks_LooksRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLooks_LooksRenderer(PlayerLooks_LooksRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLooks_LooksRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLooks_LooksRenderer(PlayerLooks_LooksRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5469};

/// @brief Field renderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___renderer;

/// @brief Field limbSpline, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___limbSpline;

/// @brief Field _fallbackPropertyBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____fallbackPropertyBlock;

/// @brief Field _materialInstanceForSimpleRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstanceForSimpleRenderer;

/// @brief Field propertyBlockHelper, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropertyBlockHelper>  ___propertyBlockHelper;

/// @brief Field local, offset: 0x38, size: 0x1, def value: None
 bool  ___local;

/// @brief Field remote, offset: 0x39, size: 0x1, def value: None
 bool  ___remote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ___renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ___limbSpline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ____fallbackPropertyBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ____materialInstanceForSimpleRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ___propertyBlockHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ___local) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks_LooksRenderer, ___remote) == 0x39, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLooks_LooksRenderer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerLooks::LookType, PlayerLooks::LooksRenderer, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLooks
class CORDL_TYPE PlayerLooks : public ::System::Object {
public:
// Declarations
using LookPart = ::GlobalNamespace::PlayerLooks_LookPart;

using LookType = ::GlobalNamespace::PlayerLooks_LookType;

using LooksRenderer = ::GlobalNamespace::PlayerLooks_LooksRenderer;

/// @brief Field alwaysStartWithRemoteBody, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysStartWithRemoteBody, put=__cordl_internal_set_alwaysStartWithRemoteBody)) bool  alwaysStartWithRemoteBody;

/// @brief Field currentLookType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLookType, put=__cordl_internal_set_currentLookType)) ::GlobalNamespace::PlayerLooks_LookType  currentLookType;

 __declspec(property(get=get_headColor)) ::GlobalNamespace::PlayerLookSet_LookColor  headColor;

/// @brief Field headRenderers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_headRenderers, put=__cordl_internal_set_headRenderers)) ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  headRenderers;

/// @brief Field hideLocalTorso, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideLocalTorso, put=__cordl_internal_set_hideLocalTorso)) bool  hideLocalTorso;

 __declspec(property(get=get_legsColor)) ::GlobalNamespace::PlayerLookSet_LookColor  legsColor;

/// @brief Field legsRenderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_legsRenderers, put=__cordl_internal_set_legsRenderers)) ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  legsRenderers;

/// @brief Field logLocalRemoteChanges, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_logLocalRemoteChanges, put=__cordl_internal_set_logLocalRemoteChanges)) bool  logLocalRemoteChanges;

/// @brief Field logVerbose, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field lookColorPropertyName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lookColorPropertyName, put=setStaticF_lookColorPropertyName)) ::StringW  lookColorPropertyName;

/// @brief Field lookSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSet, put=__cordl_internal_set_lookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  lookSet;

/// @brief Field materialPropertyBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialPropertyBlock, put=__cordl_internal_set_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

/// @brief Field playerCharacter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field puffHead, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_puffHead, put=__cordl_internal_set_puffHead)) ::UnityW<::UnityEngine::ParticleSystem>  puffHead;

/// @brief Field puffLegs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_puffLegs, put=__cordl_internal_set_puffLegs)) ::UnityW<::UnityEngine::ParticleSystem>  puffLegs;

/// @brief Field puffTorso, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_puffTorso, put=__cordl_internal_set_puffTorso)) ::UnityW<::UnityEngine::ParticleSystem>  puffTorso;

/// @brief Field relevantProps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_relevantProps, put=__cordl_internal_set_relevantProps)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  relevantProps;

/// @brief Field rewardnessPropertyName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rewardnessPropertyName, put=setStaticF_rewardnessPropertyName)) ::StringW  rewardnessPropertyName;

/// @brief Field speechlessnessPropertyName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_speechlessnessPropertyName, put=setStaticF_speechlessnessPropertyName)) ::StringW  speechlessnessPropertyName;

 __declspec(property(get=get_torsoColor)) ::GlobalNamespace::PlayerLookSet_LookColor  torsoColor;

/// @brief Field torsoRenderers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_torsoRenderers, put=__cordl_internal_set_torsoRenderers)) ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  torsoRenderers;

/// @brief Method AddRelevantProp, addr 0x180352c40, size 0x260, virtual false, abstract: false, final false
inline void AddRelevantProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method GetColor, addr 0x180352ea0, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookSet_LookColor GetColor(int32_t  lookId) ;

/// @brief Method GetLookId, addr 0x180352ee0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetLookId(::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method GetRandomLookId, addr 0x180352f40, size 0x60, virtual false, abstract: false, final false
inline int32_t GetRandomLookId() ;

/// @brief Method GetSaveKey, addr 0x180352fa0, size 0x70, virtual false, abstract: false, final false
inline ::StringW GetSaveKey(::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method Initialize, addr 0x180353010, size 0x70, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LoadOne, addr 0x180353080, size 0x140, virtual false, abstract: false, final false
inline void LoadOne(::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

static inline ::GlobalNamespace::PlayerLooks* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803531c0, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Puff, addr 0x1803532d0, size 0x160, virtual false, abstract: false, final false
inline void Puff(int32_t  lookId, ::GlobalNamespace::PlayerLooks_LookPart  lookPart) ;

/// @brief Method RefreshAllRelevantProps, addr 0x180353430, size 0xb0, virtual false, abstract: false, final false
inline void RefreshAllRelevantProps() ;

/// @brief Method RefreshLook, addr 0x1803534e0, size 0x290, virtual false, abstract: false, final false
inline void RefreshLook() ;

/// @brief Method RefreshRelevantProp, addr 0x180353770, size 0x30, virtual false, abstract: false, final false
inline void RefreshRelevantProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method RemoveRelevantProp, addr 0x1803537a0, size 0x110, virtual false, abstract: false, final false
inline void RemoveRelevantProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method ServerLoadLook, addr 0x1803538b0, size 0x50, virtual false, abstract: false, final false
inline void ServerLoadLook(bool  forceNew) ;

/// @brief Method ServerSaveLook, addr 0x180353900, size 0xf0, virtual false, abstract: false, final false
inline void ServerSaveLook(::GlobalNamespace::PlayerLooks_LookPart  lookPart, int32_t  id) ;

/// @brief Method SetAllLooks, addr 0x1803539f0, size 0xa0, virtual false, abstract: false, final false
inline void SetAllLooks(int32_t  head, int32_t  torso, int32_t  legs) ;

/// @brief Method SetBodyToLocalMode, addr 0x180353aa0, size 0x240, virtual false, abstract: false, final false
inline void SetBodyToLocalMode() ;

/// @brief Method SetBodyToLocalModeInitial, addr 0x180353a90, size 0x10, virtual false, abstract: false, final false
inline void SetBodyToLocalModeInitial() ;

/// @brief Method SetBodyToRemoteMode, addr 0x180353ce0, size 0x210, virtual false, abstract: false, final false
inline void SetBodyToRemoteMode() ;

/// @brief Method SetColor, addr 0x180353ef0, size 0x1a0, virtual false, abstract: false, final false
inline void SetColor(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  looksRenderers, ::GlobalNamespace::PlayerLookSet_LookColor  lookColor) ;

/// @brief Method SetHideLocalTorso, addr 0x180354090, size 0x20, virtual false, abstract: false, final false
inline void SetHideLocalTorso(bool  newValue) ;

/// @brief Method SetSpeechlessness, addr 0x1803541c0, size 0x50, virtual false, abstract: false, final false
inline void SetSpeechlessness(float_t  speechlessness) ;

/// @brief Method SetSpeechlessnessForPart, addr 0x1803540b0, size 0x110, virtual false, abstract: false, final false
inline void SetSpeechlessnessForPart(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  looksRenderers, float_t  speechlessness) ;

constexpr bool const& __cordl_internal_get_alwaysStartWithRemoteBody() const;

constexpr bool& __cordl_internal_get_alwaysStartWithRemoteBody() ;

constexpr ::GlobalNamespace::PlayerLooks_LookType const& __cordl_internal_get_currentLookType() const;

constexpr ::GlobalNamespace::PlayerLooks_LookType& __cordl_internal_get_currentLookType() ;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& __cordl_internal_get_headRenderers() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& __cordl_internal_get_headRenderers() ;

constexpr bool const& __cordl_internal_get_hideLocalTorso() const;

constexpr bool& __cordl_internal_get_hideLocalTorso() ;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& __cordl_internal_get_legsRenderers() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& __cordl_internal_get_legsRenderers() ;

constexpr bool const& __cordl_internal_get_logLocalRemoteChanges() const;

constexpr bool& __cordl_internal_get_logLocalRemoteChanges() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_lookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_lookSet() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialPropertyBlock() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_puffHead() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_puffHead() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_puffLegs() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_puffLegs() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_puffTorso() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_puffTorso() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* const& __cordl_internal_get_relevantProps() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*& __cordl_internal_get_relevantProps() ;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*> const& __cordl_internal_get_torsoRenderers() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>& __cordl_internal_get_torsoRenderers() ;

constexpr void __cordl_internal_set_alwaysStartWithRemoteBody(bool  value) ;

constexpr void __cordl_internal_set_currentLookType(::GlobalNamespace::PlayerLooks_LookType  value) ;

constexpr void __cordl_internal_set_headRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value) ;

constexpr void __cordl_internal_set_hideLocalTorso(bool  value) ;

constexpr void __cordl_internal_set_legsRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value) ;

constexpr void __cordl_internal_set_logLocalRemoteChanges(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_puffHead(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_puffLegs(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_puffTorso(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_relevantProps(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value) ;

constexpr void __cordl_internal_set_torsoRenderers(::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_lookColorPropertyName() ;

static inline ::StringW getStaticF_rewardnessPropertyName() ;

static inline ::StringW getStaticF_speechlessnessPropertyName() ;

/// @brief Method get_headColor, addr 0x1803542c0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookSet_LookColor get_headColor() ;

/// @brief Method get_legsColor, addr 0x180354320, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookSet_LookColor get_legsColor() ;

/// @brief Method get_torsoColor, addr 0x180354380, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookSet_LookColor get_torsoColor() ;

static inline void setStaticF_lookColorPropertyName(::StringW  value) ;

static inline void setStaticF_rewardnessPropertyName(::StringW  value) ;

static inline void setStaticF_speechlessnessPropertyName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLooks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLooks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLooks(PlayerLooks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLooks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLooks(PlayerLooks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5470};

/// @brief Field headRenderers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  ___headRenderers;

/// @brief Field torsoRenderers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  ___torsoRenderers;

/// @brief Field legsRenderers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerLooks_LooksRenderer*>  ___legsRenderers;

/// @brief Field relevantProps, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  ___relevantProps;

/// @brief Field lookSet, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___lookSet;

/// @brief Field currentLookType, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::PlayerLooks_LookType  ___currentLookType;

/// @brief Field hideLocalTorso, offset: 0x3c, size: 0x1, def value: None
 bool  ___hideLocalTorso;

/// @brief Field puffHead, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___puffHead;

/// @brief Field puffTorso, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___puffTorso;

/// @brief Field puffLegs, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___puffLegs;

/// @brief Field materialPropertyBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialPropertyBlock;

/// @brief Field alwaysStartWithRemoteBody, offset: 0x60, size: 0x1, def value: None
 bool  ___alwaysStartWithRemoteBody;

/// @brief Field logVerbose, offset: 0x61, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logLocalRemoteChanges, offset: 0x62, size: 0x1, def value: None
 bool  ___logLocalRemoteChanges;

/// @brief Field playerCharacter, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___headRenderers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___torsoRenderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___legsRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___relevantProps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___lookSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___currentLookType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___hideLocalTorso) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___puffHead) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___puffTorso) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___puffLegs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___materialPropertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___alwaysStartWithRemoteBody) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___logVerbose) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___logLocalRemoteChanges) == 0x62, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLooks, ___playerCharacter) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLooks) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
